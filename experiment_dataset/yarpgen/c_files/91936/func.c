/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91936
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */short) var_11);
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-5735)) && (((/* implicit */_Bool) arr_0 [i_0 - 1]))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (unsigned char)125)))))))));
        arr_3 [i_0 + 2] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-4)), ((unsigned short)65535)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) < (((long long int) arr_1 [i_0 + 2])));
            arr_8 [i_0] = ((/* implicit */short) ((unsigned short) ((((unsigned long long int) -1570784620)) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))))));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (short)-25921))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_0 + 1])), (arr_6 [i_0 + 2] [i_1 + 1])))))));
            arr_9 [i_1] [i_0 + 1] = ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    arr_16 [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) arr_10 [i_3] [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) 
                        {
                            {
                                arr_22 [i_5] [i_2] [i_2] [i_2] [i_0] = 63488;
                                arr_23 [i_0] [i_2] [i_3] [i_0] [i_5] = ((/* implicit */int) arr_4 [i_4] [i_5]);
                                arr_24 [i_0] [i_2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-19983)), (arr_14 [i_5] [i_0 + 1] [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2])) | (((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)20890)) ? (-1064918596) : (-1064918596)));
        arr_27 [i_6] = var_12;
        arr_28 [i_6] [i_6] = ((/* implicit */short) max((arr_5 [i_6] [i_6]), (arr_5 [i_6] [i_6])));
        arr_29 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (arr_0 [i_6])))) ? (((((/* implicit */_Bool) (short)0)) ? (18285407285489196231ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59742))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1)))));
    }
    var_16 = ((/* implicit */unsigned int) (signed char)-16);
    var_17 = min((((/* implicit */long long int) ((unsigned int) var_6))), (-5741163298523845079LL));
}
