/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70567
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
    var_17 = ((/* implicit */long long int) ((unsigned int) var_8));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((var_13) <= (var_0)))) != ((-(((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_19 += ((/* implicit */unsigned int) (-(((arr_2 [i_0 + 1] [i_0 - 3]) ^ (((((/* implicit */int) arr_1 [i_0])) << (((var_14) - (32926688400652563LL)))))))));
        var_20 = ((/* implicit */unsigned char) var_14);
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_21 -= ((/* implicit */_Bool) -193456192763206925LL);
        var_22 = ((/* implicit */unsigned int) 2913287247106682893ULL);
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (long long int i_4 = 3; i_4 < 9; i_4 += 2) 
                {
                    {
                        var_23 *= ((/* implicit */unsigned int) ((max((arr_4 [10]), (arr_4 [(unsigned short)4]))) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) * (arr_12 [0LL] [0LL] [i_4 + 2] [10])))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1]))) | (829973647168990155ULL)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)112))) : (193456192763206945LL))) : ((~(193456192763206925LL)))))));
                        var_24 -= ((/* implicit */signed char) ((max((-193456192763206926LL), (((/* implicit */long long int) arr_4 [2U])))) % (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [(_Bool)1])))))));
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 2; i_7 < 20; i_7 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) max((15533456826602868719ULL), (max((((((/* implicit */_Bool) arr_13 [i_7])) ? (arr_18 [i_5] [i_6] [i_7]) : (((/* implicit */unsigned long long int) var_1)))), (arr_15 [i_7])))));
                    var_26 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_7 - 1] [i_6 - 1] [i_6 - 1]))))) ? ((~(((/* implicit */int) arr_14 [i_7 - 1] [i_5])))) : (((arr_16 [i_7 - 1] [i_7 - 1] [i_6 - 1]) ? (((/* implicit */int) arr_14 [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_16 [i_7 - 1] [i_6] [i_6 - 1])))));
                    var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8)))))) / (193456192763206913LL)))) % (max((((((/* implicit */_Bool) -193456192763206925LL)) ? (1634720258265950730ULL) : (1634720258265950734ULL))), (max((((/* implicit */unsigned long long int) arr_17 [i_5] [i_5] [i_6 - 1] [i_7])), (arr_18 [i_5] [(unsigned short)9] [i_7 - 2])))))));
                    var_28 = ((/* implicit */unsigned char) -193456192763206925LL);
                }
            } 
        } 
        var_29 ^= ((/* implicit */signed char) ((((unsigned long long int) (unsigned short)39465)) != (16812023815443600881ULL)));
        arr_19 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_15 [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_18 [i_5] [i_5] [i_5]))) : (((((/* implicit */_Bool) var_16)) ? (arr_18 [i_5] [15] [i_5]) : (max((2913287247106682873ULL), (((/* implicit */unsigned long long int) 1766281449))))))));
    }
}
