let inputPath = Node.Process.argv->Belt.Array.getExn(2);
let data = Node.Fs.readFileAsUtf8Sync(inputPath);
Day2.parse(data)->Day2.part2->Js.log;
