/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57400
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)72)) - (((((/* implicit */int) (unsigned char)199)) << (((((/* implicit */int) var_9)) - (186))))))) | (((/* implicit */int) (unsigned char)241))));
    var_17 = var_13;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (((((+((-(((/* implicit */int) (unsigned char)134)))))) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (26)))));
        var_18 *= ((/* implicit */unsigned char) (~((-(((((/* implicit */int) arr_1 [i_0] [(unsigned char)12])) - (((/* implicit */int) (unsigned char)128))))))));
    }
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)7)) % (((((/* implicit */int) (unsigned char)251)) | (((((/* implicit */int) var_2)) | (((/* implicit */int) var_11))))))));
}
