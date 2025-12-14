/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96916
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
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] |= ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) ? (((/* implicit */long long int) 334873890U)) : (var_1))), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) & (arr_3 [i_0]))))))));
                arr_5 [i_1] [i_0 + 1] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_0 [i_1 - 2] [i_1])))) ? (max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26194))) : (36028796884746240LL))), (((/* implicit */long long int) (short)779)))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)2), ((signed char)-82)))))));
                var_12 = ((/* implicit */long long int) arr_3 [i_0 + 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_13 = max((((/* implicit */short) (_Bool)1)), ((short)-789));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((((unsigned short) (short)-757)), (arr_8 [i_2]))))));
                var_15 = ((/* implicit */short) ((unsigned int) arr_6 [i_2] [i_2]));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) 1152921435887370240LL);
                            var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)30523)) != ((+(((/* implicit */int) (short)15804)))))))) > (arr_6 [i_2] [i_2])));
                            arr_15 [i_2] [(unsigned char)2] [i_4] [i_5] [i_3] = ((/* implicit */unsigned char) ((arr_1 [i_4 + 1]) == (((((/* implicit */_Bool) (unsigned char)216)) ? (arr_1 [i_4 + 3]) : (((/* implicit */unsigned int) 588653765))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_4 + 2]))) ? (max((((/* implicit */int) (signed char)81)), (arr_3 [i_4 + 3]))) : (((((/* implicit */_Bool) arr_3 [i_4 + 1])) ? (arr_3 [i_4 + 1]) : (arr_3 [i_4 - 1])))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((var_5) < (((/* implicit */unsigned int) ((((/* implicit */int) (short)788)) * (((/* implicit */int) (signed char)-2))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */int) arr_10 [i_2] [i_3] [i_4 + 2] [i_5])) : (((/* implicit */int) (unsigned short)34999))))) ? (((/* implicit */int) arr_14 [i_4 + 2] [i_2])) : ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_8 [i_4 + 4])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
