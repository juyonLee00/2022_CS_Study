describe("pow", function(){
    
    // it("주어진 숫자 n의 제곱", function(){
    //     assert.equal(pow(2, 3), 8) // use case #1
    //     assert.equal(pow(3,4), 81) // use case #2
    // });

    // assert 에서 에러가 발생하면 it 블록은 즉시 종료된다. 
    // 따라서 use case 별로 it 블록을 따로 작성하는 것을 추천한다. 
    // it("2를 세 번 곱하면 8입니다.", function() {
    //     assert.equal(pow(2, 3), 8);
    // });

    // it("3을 네 번 곱하면 81입니다.", function() {
    //     assert.equal(pow(3, 4), 81);
    // });

    // for 문을 사용해 자동으로 it 블록 생성
    describe("x를 세 번 곱합니다.", function() {
        function makeTest(x) {
            let expected = x * x * x;
            it(`${x}을/를 세 번 곱하면 ${expected}입니다.`, function() {
            assert.equal(pow(x, 3), expected);
            });
        }

        for (let x = 1; x <= 5; x++) {
            makeTest(x);
        }
    });
});