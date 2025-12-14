/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96659
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-56))))), (((((/* implicit */int) (signed char)110)) / (((/* implicit */int) var_7)))))), (min(((-(((/* implicit */int) (signed char)127)))), (((/* implicit */int) (unsigned char)255)))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_19 -= min((((/* implicit */unsigned char) (signed char)-11)), ((unsigned char)241));
                    arr_7 [i_0] [(signed char)16] [i_0] = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-66))))), (((unsigned char) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_6))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        arr_10 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_10))) || (((/* implicit */_Bool) (unsigned char)255))));
                        var_20 &= ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)95))))))));
                        var_21 -= ((unsigned char) (!(((/* implicit */_Bool) var_16))));
                        arr_11 [(unsigned char)2] [(unsigned char)2] [i_0] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) ((unsigned char) (unsigned char)139))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(unsigned char)19] [i_0])) || (((/* implicit */_Bool) var_14))))))) <= (((/* implicit */int) var_14))));
                        var_22 = var_0;
                    }
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 3; i_5 < 21; i_5 += 3) 
                        {
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)1)) < (((/* implicit */int) (unsigned char)239))))) == (((((/* implicit */int) (signed char)62)) - (((/* implicit */int) (signed char)75))))));
                            arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) ((unsigned char) (signed char)69))) * (((/* implicit */int) var_10))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_24 = max((((signed char) arr_2 [i_0] [i_0])), (arr_5 [i_2]));
                            arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (signed char)-51)))), (((/* implicit */int) ((((/* implicit */int) arr_16 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1])) == (((/* implicit */int) (signed char)62)))))));
                        }
                        arr_23 [(signed char)3] [i_0] [i_0] [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (signed char)-58))) && (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-63)) + (2147483647))) << (((((/* implicit */int) arr_20 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])) - (144))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)70))));
                                arr_30 [(signed char)20] [(signed char)20] [(signed char)15] [i_0] [i_7] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)57)) == (((((((/* implicit */int) (unsigned char)184)) + (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_2] [i_0])))) ^ ((+(((/* implicit */int) (signed char)-11))))))));
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)210)))))))));
                                arr_31 [i_0] [i_0] [i_0] [i_0] [(unsigned char)22] [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((signed char) (unsigned char)210))) : (((/* implicit */int) max(((unsigned char)3), (((/* implicit */unsigned char) arr_14 [i_0] [i_1]))))))) + (2147483647))) >> (((((/* implicit */int) (signed char)-73)) + (89)))));
                            }
                        } 
                    } 
                }
                for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    arr_35 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) var_7);
                    var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)1))));
                    var_28 = ((/* implicit */unsigned char) min((min((((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (unsigned char)81))))), ((-(((/* implicit */int) (unsigned char)0)))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) arr_15 [i_1 + 1] [i_1] [i_9] [(signed char)10] [(signed char)1]))))));
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1]))))) >> (((/* implicit */int) arr_24 [i_0] [i_1] [i_9] [(signed char)16] [i_9])))))));
                }
            }
        } 
    } 
    var_30 ^= ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) var_3))));
    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) var_17))));
    var_32 = var_7;
}
