/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93038
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-30187)) % (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) != (((/* implicit */int) (unsigned short)62)))))));
        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [(_Bool)1] [i_0 + 1])) % (((((/* implicit */int) (unsigned short)51822)) ^ (((/* implicit */int) var_11))))));
        arr_3 [i_0 + 1] = ((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 1]);
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_14 -= ((short) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)6148)) : (((/* implicit */int) (unsigned short)57368)))), (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_8))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1])) - (((/* implicit */int) min(((short)-19523), (var_11))))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-3857)) <= (((/* implicit */int) var_9))))) : (((/* implicit */int) var_7))));
        arr_7 [i_1] |= ((/* implicit */short) min((((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_1])), ((unsigned short)28668))))));
        var_16 = ((/* implicit */_Bool) max((min((((/* implicit */int) arr_4 [i_1])), ((-(((/* implicit */int) arr_6 [i_1])))))), (((/* implicit */int) var_4))));
    }
    var_17 = ((/* implicit */short) (+(((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (short i_2 = 4; i_2 < 8; i_2 += 2) 
    {
        var_18 = ((/* implicit */short) (~(((((/* implicit */int) max((var_10), (arr_5 [i_2] [i_2 - 4])))) * (((/* implicit */int) (unsigned short)36351))))));
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned short)72))))))));
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        var_20 |= ((/* implicit */short) var_6);
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_1 [i_3] [(_Bool)1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)19803)) <= (((/* implicit */int) (_Bool)1))))))))));
    }
    for (short i_4 = 3; i_4 < 18; i_4 += 1) 
    {
        arr_17 [(_Bool)1] |= ((/* implicit */short) ((((((/* implicit */int) min((arr_14 [i_4 - 2]), (arr_14 [(short)1])))) ^ ((~(((/* implicit */int) (short)31964)))))) != (((/* implicit */int) arr_5 [i_4 - 1] [i_4 + 1]))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            for (short i_6 = 2; i_6 < 17; i_6 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 1; i_7 < 17; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_6])) ? (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_6 [i_4 - 2]))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */int) (unsigned short)8088)), (((((/* implicit */int) var_4)) - ((+(((/* implicit */int) arr_19 [(unsigned short)2] [(short)8] [i_5])))))))))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (short)-28055))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((((/* implicit */int) min(((unsigned short)53868), ((unsigned short)57427)))), (((((/* implicit */int) arr_15 [i_4])) + (((/* implicit */int) ((_Bool) var_6))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 2; i_8 < 17; i_8 += 4) 
                    {
                        var_26 *= ((short) arr_26 [i_4 - 1] [i_5] [i_5 + 2] [i_6] [i_8]);
                        var_27 *= ((/* implicit */unsigned short) ((short) arr_22 [i_4 - 2] [i_5 + 2]));
                    }
                    var_28 = ((/* implicit */short) ((((((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_4 - 2] [(_Bool)1] [i_4 + 1])), (var_0)))) - (((/* implicit */int) arr_18 [i_4] [i_4 + 1])))) * (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-21026))))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */short) var_7);
        var_30 *= ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_13 [(unsigned short)8]), (((/* implicit */unsigned short) arr_26 [i_4 - 1] [(short)10] [i_4 - 3] [i_4] [i_4]))))) != ((-((~(((/* implicit */int) var_11))))))));
    }
}
