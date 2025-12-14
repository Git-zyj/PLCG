/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8607
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
    var_16 = var_5;
    var_17 = var_8;
    var_18 = ((/* implicit */short) min(((-(-1303907891955579272LL))), ((~((~(-7283325635543931621LL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_19 = ((/* implicit */long long int) ((unsigned int) ((((((-7283325635543931621LL) + (9223372036854775807LL))) << (((var_11) - (565025185U))))) == (((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) + (2147483647))) << (((3888526761U) - (3888526761U)))))))));
                    arr_6 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (9223372036854775807LL) : (-886214213823993980LL)))) ? (max((-886214213823993984LL), (-3502686788188653075LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-4153)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            arr_12 [i_2] [i_2] [i_0] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (short)28154)) <= (((/* implicit */int) ((short) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) (short)(-32767 - 1)))))))));
                            var_21 = ((/* implicit */short) min((((/* implicit */long long int) max((208214288U), (((/* implicit */unsigned int) (short)-29))))), (((((/* implicit */_Bool) 4273773454426973494LL)) ? (((/* implicit */long long int) 64148854U)) : (6384950931081482277LL)))));
                            arr_13 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_0 [i_0] [i_0]))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 + 1]))))))));
                            arr_14 [i_0 - 2] [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1] [i_3] [i_4]))))), (arr_4 [i_0 + 1] [i_0] [i_0]))) | (((/* implicit */long long int) (~((~(((/* implicit */int) var_6)))))))));
                        }
                        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-6888697941036596631LL) / (-6888697941036596634LL)))) ? ((-(arr_0 [i_0] [i_1]))) : (min((((/* implicit */long long int) 565040787U)), (-3369480384607279881LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 2] [i_0 - 2] [i_0] [i_0] [i_0] [i_0 + 2]))))))) : (arr_8 [i_3] [i_0])));
                            var_24 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (short)32766))) >= (7283325635543931621LL))) ? (((/* implicit */long long int) arr_9 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 1])) : (-2534469604027667940LL)));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (((((!(((/* implicit */_Bool) (short)32767)))) ? ((-(-4549225211152238054LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) == (max((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (arr_8 [i_0] [i_2]))))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((-8295630973751483629LL), (((/* implicit */long long int) (short)32763))))))) ? (((/* implicit */int) ((((/* implicit */long long int) 8U)) == (min((((/* implicit */long long int) 64148854U)), (1LL)))))) : (((/* implicit */int) (short)28154))));
                        }
                        var_27 = ((long long int) min((((/* implicit */long long int) arr_7 [i_3] [i_1] [i_0] [i_0] [i_0 - 2])), (var_15)));
                    }
                }
                for (long long int i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [14LL] [i_6 + 2] [i_6])) ? (max((((/* implicit */long long int) 3729926509U)), (7982941733999746253LL))) : (arr_19 [i_0 + 2] [i_0 + 2])))) || (((/* implicit */_Bool) ((unsigned int) ((long long int) 6888697941036596630LL))))));
                    arr_20 [i_0 + 1] [i_0] [i_0 + 1] = min((((long long int) min((var_15), (((/* implicit */long long int) (short)22989))))), (((/* implicit */long long int) (+(arr_9 [i_6] [i_6 - 1] [i_6 + 2] [i_6 + 2] [i_6] [i_6])))));
                }
                /* vectorizable */
                for (short i_7 = 2; i_7 < 17; i_7 += 1) 
                {
                    var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(short)2] [(short)2])) ? (((/* implicit */long long int) arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 2])) : (((((/* implicit */long long int) ((/* implicit */int) (short)992))) & (var_15)))));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-32755))));
                        /* LoopSeq 3 */
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                        {
                            var_31 = ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (arr_10 [i_0] [i_0]) : (arr_10 [i_0] [i_0]));
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_19 [i_1] [i_9])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8] [(short)0]))))))))));
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_1] [i_9])) ? (((((/* implicit */_Bool) var_15)) ? (2215267381U) : (1776763003U))) : (((arr_21 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_0] [(short)10] [i_0 - 2] [i_0] [i_9] [i_8])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) -2239303878901968578LL)))))))))));
                        }
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                        {
                            arr_30 [i_1] [i_7] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */long long int) var_7)) >= (2186559666123430495LL))))));
                            arr_31 [i_0] [i_1] [i_7] [i_8] = ((/* implicit */unsigned int) (~(((-8665702595347482093LL) / (((/* implicit */long long int) ((/* implicit */int) (short)20957)))))));
                            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-4039)) ? (((/* implicit */long long int) 2089897315U)) : (-2239303878901968578LL)));
                        }
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                        {
                            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_0 + 1])) > (((/* implicit */int) arr_2 [i_0] [i_1] [i_0 - 1])))))));
                            var_37 = ((/* implicit */long long int) (short)32767);
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (short)-16753))));
                            arr_36 [i_1] [i_1] [4U] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 2] [i_7] [i_7] [i_7] [i_7 + 1]))) == ((~(arr_22 [i_11] [i_7] [i_1] [i_0 - 1])))));
                        }
                    }
                    for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        var_39 *= ((/* implicit */unsigned int) (short)-25303);
                        arr_39 [i_0] = ((/* implicit */long long int) arr_34 [i_0 - 2] [i_7 - 1] [i_7] [i_7 - 1] [i_12] [i_12]);
                    }
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [i_1] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_7 + 1]))) == (9223372036854775807LL)));
                    arr_40 [i_0] [i_1] [i_0] [i_0] = (short)32751;
                }
                var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) var_6)))));
                arr_41 [i_0] [i_0] [i_0] = max((((arr_38 [i_0 - 1]) | (((/* implicit */long long int) (-(arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_0 - 2] [i_0] [i_0 - 1] [i_0 + 1])) ? (2205069968U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_1] [i_1] [i_1])))))));
                var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (short)25287))));
            }
        } 
    } 
}
