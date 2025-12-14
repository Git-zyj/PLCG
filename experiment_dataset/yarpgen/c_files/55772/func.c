/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55772
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
    var_17 = (+(((/* implicit */int) var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_3 [(unsigned short)8] = ((/* implicit */short) 1150088314);
        var_18 -= ((/* implicit */signed char) ((-1150088317) - (((/* implicit */int) var_11))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((_Bool) var_9));
        var_19 = ((/* implicit */unsigned short) var_7);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = (+(((((/* implicit */_Bool) ((int) -1150088319))) ? (((((/* implicit */int) arr_6 [i_1])) + (var_4))) : (((/* implicit */int) var_10)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (unsigned short)0);
                    arr_17 [i_1] [14] [14] [i_3] &= ((/* implicit */int) var_14);
                    arr_18 [(unsigned short)11] [i_2] [i_3] = ((/* implicit */short) ((int) var_10));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (short i_5 = 3; i_5 < 13; i_5 += 4) 
            {
                {
                    arr_24 [i_5 + 2] [i_1] = ((_Bool) ((((/* implicit */int) ((signed char) var_10))) * (((/* implicit */int) var_8))));
                    var_21 += ((/* implicit */unsigned short) min((var_7), (min((((var_0) & (var_7))), (min((-1150088298), (var_7)))))));
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        var_22 |= ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) max((arr_7 [i_1]), (((/* implicit */unsigned short) (short)32760))))))) ? (((/* implicit */int) max((arr_25 [i_5 + 2]), (((/* implicit */short) var_5))))) : (((/* implicit */int) var_8)));
                        var_23 = ((/* implicit */_Bool) max((min((((((/* implicit */int) var_8)) * (((/* implicit */int) var_1)))), (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) 1150088314)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_0)) ? (-1150088316) : (-1150088314)))))));
                    }
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        arr_30 [i_1] = max((((((/* implicit */int) var_12)) % (((/* implicit */int) var_9)))), (((/* implicit */int) arr_10 [i_5 + 3] [i_5 - 2] [4])));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_10))));
                            var_25 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [i_1])) : (arr_22 [i_1] [i_1]))) / (var_4)));
                            var_26 = ((int) var_16);
                            var_27 *= ((/* implicit */int) (_Bool)1);
                            arr_33 [i_7] [i_7] [i_4] = ((/* implicit */int) arr_10 [i_1] [(signed char)6] [i_5]);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) <= (((/* implicit */int) (signed char)60))));
                            arr_36 [i_1] [i_4] [i_5 - 1] [i_7] [(_Bool)1] = ((short) arr_20 [i_5 + 4] [i_5 - 2]);
                        }
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (signed char)-41))));
                        var_31 *= ((/* implicit */_Bool) var_14);
                    }
                }
            } 
        } 
    }
    var_32 = var_3;
}
