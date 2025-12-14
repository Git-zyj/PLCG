/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57821
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_18 ^= ((/* implicit */unsigned int) 17307713590203021509ULL);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] [(short)10] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)33844)) ? (max((7621289633111739125ULL), (((/* implicit */unsigned long long int) 3594286070U)))) : (min((9223372036854767616ULL), (12597398444223149558ULL))))) >> (((((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_11 [i_3 + 1]) : (((/* implicit */unsigned long long int) 1335187351U)))) - (18116888396219616982ULL)))));
                                arr_15 [4U] [4U] [10U] [i_3 + 1] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1468826022265588123ULL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) >> (((((/* implicit */int) var_4)) - (150)))))))))) : (((max((((/* implicit */unsigned long long int) var_14)), (1139030483506530107ULL))) / (((/* implicit */unsigned long long int) min((3594286070U), (3594286070U))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] &= var_0;
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63101)) ? (arr_3 [i_2 + 2] [i_2 + 3]) : (((/* implicit */unsigned long long int) var_8))))))))));
                    arr_17 [10ULL] [i_1] [i_1] [10ULL] = ((/* implicit */unsigned long long int) ((min((arr_12 [i_2 + 1] [i_1] [i_1] [i_1] [(unsigned char)8]), (((/* implicit */unsigned long long int) (~(632377418U)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) var_7))))))));
                }
            } 
        } 
        arr_18 [i_0] &= ((/* implicit */short) (unsigned short)1024);
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)7127))));
        arr_19 [i_0] |= ((/* implicit */short) min((((/* implicit */unsigned int) (((~(((/* implicit */int) arr_7 [i_0] [i_0] [1U] [i_0])))) != (((/* implicit */int) ((short) (unsigned char)220)))))), (((768082581U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2434)))))));
    }
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        var_21 = (-(((unsigned long long int) arr_11 [i_5])));
        var_22 -= ((/* implicit */unsigned char) (+(min((0U), (var_9)))));
        var_23 += ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) var_9)) - (68719476735ULL))))), (((unsigned short) (-(10719963618352921463ULL))))));
        var_24 = ((/* implicit */unsigned int) ((unsigned long long int) var_1));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((arr_24 [i_6 - 1]) == (((var_11) / (((/* implicit */unsigned long long int) 2177989730U))))));
        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [i_6 - 1])) ? (arr_22 [i_6]) : (2785575137U))) | (arr_23 [i_6])));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 0ULL))) ? ((-(545460846592ULL))) : ((+(var_6)))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)64609)), (var_3)))), (((16977918051443963492ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19108))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((2391492243U) / (var_8))))))));
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63102))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))) || (((/* implicit */_Bool) var_1))));
}
