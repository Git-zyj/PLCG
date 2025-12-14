/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94175
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
    var_13 = 12202608580190595033ULL;
    var_14 = (_Bool)1;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0] &= ((/* implicit */unsigned char) (_Bool)1);
        var_15 = ((/* implicit */short) max((((/* implicit */int) (_Bool)0)), (((((((/* implicit */_Bool) 6244135493518956582ULL)) ? (((/* implicit */int) (unsigned char)8)) : (2147483647))) & (((/* implicit */int) (!((_Bool)1))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */_Bool) ((max((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)-3)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_11))))))) * (((/* implicit */int) ((((/* implicit */int) (short)-1)) != (((((((/* implicit */int) arr_2 [(short)22] [i_1])) + (2147483647))) >> (((6244135493518956580ULL) - (6244135493518956574ULL))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */int) 12202608580190595017ULL);
                        var_17 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_2 - 1] [i_2 - 4]))) : (((((/* implicit */unsigned long long int) 4294967295U)) | (1073741823ULL)))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            arr_20 [i_4] [i_5] = ((/* implicit */unsigned char) (unsigned short)65535);
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            arr_24 [i_4] [i_1] [i_4] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_19 [i_0] [i_4] [i_2 - 4] [i_1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_7)));
                            var_20 |= ((/* implicit */long long int) (signed char)(-127 - 1));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((arr_19 [i_0] [20LL] [i_2 - 1] [i_6 + 2] [i_2 - 4]) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_19 [i_0] [(_Bool)1] [i_2] [i_6 + 2] [i_2 - 4])))))));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 2) /* same iter space */
                        {
                            arr_27 [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)118))))) ? (6244135493518956582ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))))))));
                            arr_28 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)179)) ? (var_7) : (-7599885436727432781LL)));
                            arr_29 [i_0] [i_4] = ((/* implicit */unsigned int) ((short) ((short) arr_17 [i_2] [i_1] [i_4] [i_4] [i_7])));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) & (2998363448466795927ULL)))));
                            arr_33 [i_0] [i_1] [i_2 - 3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_32 [i_2 + 1] [i_2 - 3] [i_4] [i_4] [i_2 + 1]))));
                            arr_34 [i_4] = ((/* implicit */unsigned long long int) ((long long int) arr_8 [i_0] [i_1] [i_2 + 1]));
                        }
                        var_24 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)0))))) == (((/* implicit */int) ((unsigned short) 0ULL)))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)65535)), (((((/* implicit */_Bool) (short)-14053)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned short)7168))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_9]))) / (var_6)))) ? (((((/* implicit */_Bool) 12202608580190595033ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)12))))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)7635)))))))));
                        arr_37 [i_1] [i_2 - 4] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    var_26 = ((/* implicit */unsigned long long int) (signed char)-25);
                }
            } 
        } 
        arr_38 [i_0] |= (-(((/* implicit */int) (_Bool)0)));
    }
    /* vectorizable */
    for (unsigned char i_10 = 3; i_10 < 21; i_10 += 2) 
    {
        arr_41 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)205))));
        var_27 = ((/* implicit */_Bool) ((unsigned short) (signed char)12));
    }
}
