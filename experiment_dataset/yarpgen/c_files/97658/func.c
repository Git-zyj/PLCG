/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97658
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
    var_10 += ((/* implicit */unsigned short) ((unsigned int) var_4));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_7))) || (((/* implicit */_Bool) ((((unsigned int) var_4)) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_3 + 2])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_3 + 2]))))));
                                arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                                arr_16 [i_4] [i_3] [i_2] [i_0] [i_1] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) > (arr_2 [i_0])));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (((long long int) ((arr_6 [i_0] [i_3 + 1] [i_0]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_2]))))))));
                                var_13 = ((/* implicit */signed char) (((!(((var_7) > (((/* implicit */unsigned long long int) -5525432876041388502LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125)))))) : (arr_9 [i_3] [i_2] [i_0 - 1])));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18217))) : (0U))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_15 &= ((/* implicit */int) ((((((/* implicit */_Bool) ((-1) / (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -6183537301573056158LL)))) : (18446744073709551607ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122)))));
                                arr_24 [i_0 - 1] [i_0] [i_5] [0LL] [i_2] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((_Bool) ((unsigned long long int) 30ULL)));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [12ULL] [i_0] [i_5])) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) -1)) : (2194146775U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) -3395463020900233345LL)) ? (arr_22 [i_0]) : (arr_22 [i_0]))) : (((long long int) 27U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_17 &= ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_1))))))));
                                arr_30 [i_8] [i_0] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-117)), (((((/* implicit */_Bool) (signed char)125)) ? (-5447891353043169771LL) : (((/* implicit */long long int) 325136108U))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)117))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
