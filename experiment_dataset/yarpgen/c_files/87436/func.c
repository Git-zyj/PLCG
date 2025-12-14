/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87436
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
    var_14 = ((/* implicit */unsigned short) (unsigned char)71);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_15 = ((/* implicit */long long int) ((min((((/* implicit */long long int) (unsigned short)51918)), (((arr_1 [(_Bool)1] [(unsigned char)9]) % (((/* implicit */long long int) ((/* implicit */int) var_7))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)71))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_16 = ((((/* implicit */_Bool) (unsigned short)28763)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 4])) ? (arr_1 [(signed char)12] [i_1 + 4]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [4] [14U] [(_Bool)1])) == (((/* implicit */int) (_Bool)1))))))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                var_17 *= ((/* implicit */signed char) (-((((-(((/* implicit */int) (unsigned char)185)))) / (1350609104)))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((var_12) == (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            arr_15 [16LL] [2] [(_Bool)1] [i_0] [2ULL] [(unsigned char)11] [11LL] = var_4;
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13606)) > (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) min((max((var_3), (((/* implicit */unsigned char) arr_13 [(_Bool)1] [(unsigned short)14] [(signed char)18] [(unsigned char)4] [i_1 + 3] [(_Bool)1] [5LL])))), (((/* implicit */unsigned char) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_11 [(signed char)2] [(short)8] [(signed char)12])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_20 [i_5] = ((/* implicit */signed char) ((unsigned short) 1350609104));
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    arr_25 [(signed char)12] [(signed char)8] [i_5] [6ULL] = var_13;
                    var_21 = ((/* implicit */unsigned long long int) max(((~(-21178883))), (arr_17 [15ULL])));
                }
                for (unsigned short i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    arr_28 [1] [(unsigned short)6] [i_5] [8U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2987283205184530519ULL)))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_6 [14LL] [(unsigned short)17] [i_8 - 1]))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) arr_19 [i_5]))) - (((((/* implicit */_Bool) (unsigned short)11895)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-3166247534044288595LL)))));
                }
                var_23 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_18 [i_6])) ? (arr_18 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)71), (((/* implicit */unsigned char) (_Bool)1))))) % (((/* implicit */int) var_13)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (-(var_12)));
}
