/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68003
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_1] [i_1] [i_1 - 1] [i_1 - 2]));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) arr_1 [i_0]);
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_2)))))));
                        arr_13 [i_0] [i_3] [i_3] = ((/* implicit */int) var_9);
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)5] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1 + 1] [i_2] [i_3]);
                    }
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
                    {
                        var_16 ^= (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) && (((/* implicit */_Bool) var_13))))));
                        var_17 *= ((/* implicit */signed char) arr_4 [i_1] [i_1] [i_2]);
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_2] [i_4])) ? (((/* implicit */unsigned int) arr_7 [i_4] [i_4] [i_4] [i_4])) : (3568754489U)));
                    }
                    for (int i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        arr_20 [i_0] [i_5] = ((/* implicit */int) arr_0 [(signed char)2]);
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_6 + 1] [i_5 - 2] [i_1 - 1] [i_1 - 2])) + (((/* implicit */int) arr_5 [i_6 - 1] [i_5 + 1] [i_1 - 3] [i_0]))));
                            var_19 = ((/* implicit */long long int) (signed char)125);
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_20 += 2416836736U;
                        arr_27 [i_0] [i_7] [i_1] = ((/* implicit */short) arr_17 [i_0]);
                        var_21 = ((/* implicit */unsigned int) ((unsigned char) arr_3 [(signed char)10]));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_26 [i_1 - 3] [i_1] [i_1 - 1]))));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned char i_8 = 3; i_8 < 9; i_8 += 3) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9916959406875390980ULL)) ? (2588411176U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165)))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        var_24 &= ((/* implicit */short) min((1721321115), (((/* implicit */int) (((~(-913111558))) < (((/* implicit */int) arr_16 [6U])))))));
                        arr_34 [i_0] [i_0] [i_8] [i_8] = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))) / (min((arr_22 [i_8] [i_0] [i_8]), (3497270712U))));
                    }
                }
                for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        arr_41 [i_0] [i_11] [i_10] [i_10] [i_1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1837256078U)) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_1] [i_1 - 2] [i_10])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_10] [i_11]))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_10] [i_11] [i_10] [(signed char)6] [i_10])) * (((/* implicit */int) arr_2 [i_1] [i_1 - 3]))));
                        var_26 = ((/* implicit */short) var_11);
                        arr_42 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(-118452408)));
                    }
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_1 + 1] [i_1 + 1] [i_10] [i_10])))))));
                    arr_43 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_21 [i_0] [6U] [i_10] [i_10] [i_10]);
                    arr_44 [i_0] [i_10] [i_10] [i_10] = min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0));
                }
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_22 [(_Bool)0] [(_Bool)0] [(_Bool)0]) * (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) var_2))));
                var_29 = ((/* implicit */unsigned char) var_6);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
    {
        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
        {
            {
                var_30 = ((/* implicit */long long int) min((min((arr_46 [i_12]), (3))), (((((/* implicit */_Bool) arr_47 [i_12])) ? (((/* implicit */int) arr_48 [i_13] [i_13] [i_13])) : (arr_46 [i_12])))));
                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) var_12)))) <= (((((arr_45 [i_12] [(unsigned char)15]) + (2147483647))) >> (((((/* implicit */int) arr_47 [i_12])) - (84))))))), ((!(((/* implicit */_Bool) min(((signed char)8), (arr_47 [i_12])))))))))));
                var_32 = ((/* implicit */_Bool) var_5);
                arr_50 [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (arr_49 [i_13]))) ? (13162089613649469886ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_13] [i_13] [(signed char)9]))))), ((~(min((((/* implicit */unsigned long long int) var_3)), (arr_49 [i_13])))))));
                var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_47 [i_12])) < (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_49 [i_12])) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */int) var_12);
    var_35 = ((/* implicit */int) var_13);
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_10))) - (1945990860U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (min((((/* implicit */unsigned long long int) var_5)), (7543143925141820012ULL))))))) : (min((var_11), (4258122827275353762ULL)))));
}
