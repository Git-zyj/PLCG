/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60464
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
    var_17 = (+(((/* implicit */int) var_14)));
    var_18 = ((/* implicit */int) max((var_18), ((+(((((/* implicit */_Bool) ((unsigned char) var_13))) ? (var_9) : ((+(((/* implicit */int) var_13))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_19 = ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */int) var_13))))))) : (var_4));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_10)))) ? (((1228402647) ^ (((/* implicit */int) (unsigned char)223)))) : (max((var_9), (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 2]))))));
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) ((unsigned char) var_15))) : (((((/* implicit */_Bool) var_11)) ? (min((var_9), (var_6))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (var_7)))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (arr_5 [i_0] [i_1] [7] [9LL]) : (200776113)))))) ? ((+(((/* implicit */int) var_14)))) : (((int) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_11 [i_3] [i_1] [i_0] [i_1] [i_0] [i_1])))))));
                            var_22 = ((/* implicit */unsigned char) var_9);
                        }
                        var_23 = ((/* implicit */int) var_10);
                        var_24 -= ((/* implicit */unsigned char) max((var_3), ((+((+(((/* implicit */int) var_13))))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
    }
    var_26 = min((max((((((/* implicit */_Bool) var_0)) ? (-200776113) : (var_7))), (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */int) var_13)))))), ((~(var_7))));
}
