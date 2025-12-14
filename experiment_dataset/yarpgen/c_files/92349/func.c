/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92349
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_16 = (-(((/* implicit */int) (_Bool)1)));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_1 [i_0]))));
        var_18 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (2807822240659006630LL)));
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 2807822240659006630LL))));
        arr_3 [i_0] = ((long long int) (unsigned char)33);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) (~(2807822240659006630LL)));
            arr_9 [i_1] = ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1])) ? (((/* implicit */long long int) ((unsigned int) (_Bool)1))) : (arr_8 [i_1] [i_2] [i_2]));
        }
        for (short i_3 = 4; i_3 < 22; i_3 += 2) 
        {
            arr_13 [i_1] [i_3] = ((/* implicit */long long int) ((_Bool) arr_8 [i_3 - 1] [i_3 + 1] [i_3]));
            arr_14 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3 - 4])) ? (arr_11 [i_3 - 1] [i_3 - 1]) : (((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) | (((/* implicit */int) (unsigned char)33))))));
            arr_15 [i_1] [i_3 + 1] [i_3] = ((/* implicit */unsigned char) (!((_Bool)1)));
            /* LoopNest 3 */
            for (signed char i_4 = 2; i_4 < 22; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 3; i_6 < 21; i_6 += 4) 
                    {
                        {
                            arr_26 [i_1] [i_3] [i_3] [i_5] [i_6] |= ((unsigned char) arr_1 [i_6 - 2]);
                            arr_27 [(signed char)14] [(signed char)14] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_25 [i_1] [i_1])) / (-2807822240659006631LL)));
                            var_20 |= var_2;
                        }
                    } 
                } 
            } 
            arr_28 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2807822240659006609LL)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */int) arr_4 [i_3 - 2]))));
        }
        arr_29 [i_1] [i_1] = ((/* implicit */unsigned short) 2807822240659006656LL);
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
    {
        arr_33 [i_7] = ((/* implicit */unsigned long long int) ((((2807822240659006643LL) - (((/* implicit */long long int) var_2)))) & (((/* implicit */long long int) 840597350))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)64)) & (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        var_22 &= ((((/* implicit */_Bool) ((2807822240659006611LL) + (((/* implicit */long long int) var_5))))) ? (arr_37 [i_8] [i_8]) : (((/* implicit */int) (_Bool)1)));
        var_23 = ((/* implicit */int) ((((((/* implicit */long long int) -840597351)) / (-1648208281989423884LL))) >> (((-2107568934) + (2107568960)))));
        arr_38 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_22 [(unsigned char)18] [i_8] [5LL] [(signed char)10] [i_8]))) ? (arr_31 [(signed char)8]) : (((/* implicit */unsigned int) arr_1 [i_8]))));
    }
    var_24 *= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_4)))) : (var_5)))), (var_11));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) % (840597354)))) ? (2372957467U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6))))));
}
