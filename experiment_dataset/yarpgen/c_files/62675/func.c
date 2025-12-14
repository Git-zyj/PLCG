/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62675
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
    var_11 = ((unsigned short) max((((/* implicit */unsigned int) var_4)), (max((var_9), (((/* implicit */unsigned int) var_0))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_12 -= ((/* implicit */_Bool) var_5);
        arr_3 [i_0] [i_0] = 3061595368U;
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_13 ^= ((/* implicit */unsigned int) arr_5 [7U]);
        arr_6 [i_1] = ((/* implicit */unsigned short) ((arr_4 [i_1] [i_1]) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (signed char)5)))) + (((((/* implicit */int) (unsigned short)15147)) + (((/* implicit */int) (_Bool)1)))))) : (min(((-(((/* implicit */int) arr_4 [i_1] [i_1])))), (((((/* implicit */int) (unsigned short)17215)) - (((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 4; i_2 < 23; i_2 += 1) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) (~(min((max((((/* implicit */unsigned int) (unsigned short)23665)), (arr_8 [i_2] [i_2] [i_1]))), (((/* implicit */unsigned int) arr_4 [i_1] [i_1]))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                arr_12 [i_2] = ((/* implicit */signed char) ((3026201161U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40900)))));
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (((-(((/* implicit */int) arr_5 [i_2 + 2])))) + (((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)0)))))))));
                var_15 = ((/* implicit */unsigned short) arr_4 [16U] [i_3]);
            }
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                arr_15 [i_2] [(unsigned short)15] [(signed char)8] [i_2 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 2] [i_2 - 2]))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-((+(var_6))))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (signed char i_6 = 3; i_6 < 24; i_6 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_19 [i_2] [i_5] [i_4] [i_2] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_4] [i_1] [(unsigned short)15]))))) : (((/* implicit */int) arr_20 [i_6 - 1] [i_2] [i_2] [i_4] [i_2] [i_2] [i_1]))));
                            var_18 -= ((/* implicit */_Bool) ((var_2) - (arr_14 [i_1] [i_4] [i_5] [i_5])));
                            arr_21 [i_4] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_2 - 3] [i_6 - 3] [i_2] [i_6]))) : ((~(4150804282U)))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_2 - 4] [i_2 - 2] [i_4] [i_6 - 1] [(unsigned short)4])) : (((/* implicit */int) arr_13 [i_2 + 2] [i_2 + 2] [i_2]))));
                        }
                    } 
                } 
            }
            var_20 = ((/* implicit */signed char) var_2);
        }
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            var_21 = 3489537974U;
            arr_24 [(signed char)6] [i_1] [(signed char)24] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_4))) + ((+(((/* implicit */int) arr_7 [6U] [6U]))))))) * ((-((-(arr_8 [i_7] [(_Bool)1] [i_1])))))));
        }
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            arr_28 [i_8] [i_1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [(signed char)5] [i_8] [i_1] [i_1] [i_1] [i_8] [(signed char)5]))))) ? ((-((((_Bool)1) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)60136))))) ? (3360698478U) : (((((/* implicit */_Bool) arr_19 [i_8] [i_1] [i_1] [i_1] [i_8])) ? (var_8) : (arr_10 [i_1] [(signed char)9] [i_1] [i_8])))))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((unsigned int) min((arr_26 [i_1] [i_8] [i_9]), (((/* implicit */signed char) (_Bool)1))))))));
                arr_32 [i_1] [i_1] [(unsigned short)10] [i_8] = min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [i_1] [i_1] [i_8] [i_9] [i_9]))))), (min((var_9), (((/* implicit */unsigned int) arr_18 [i_9] [i_8] [i_8] [i_1] [i_1])))));
            }
        }
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-15)) + (45)))));
    var_24 = ((/* implicit */unsigned short) var_8);
    var_25 = ((/* implicit */signed char) ((var_7) ? (min((var_1), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)8167)))))) : ((((+(var_5))) / (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (var_4)))))))));
}
