/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97195
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 *= ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_2 [i_2])))) <= (((/* implicit */int) max((arr_3 [i_2]), (arr_3 [i_0]))))));
                    var_12 *= ((/* implicit */signed char) min((max((6515759523556781436ULL), (((/* implicit */unsigned long long int) 1716665196U)))), (((/* implicit */unsigned long long int) ((min((arr_1 [i_1]), (((/* implicit */unsigned int) arr_0 [i_2])))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_4)) == (arr_1 [i_0]))))))))));
                    var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 804435433)) || (min(((((_Bool)1) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])))), (((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 1669652926U))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            {
                var_14 &= ((/* implicit */unsigned short) (signed char)-48);
                var_15 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_6 [i_3] [i_4] [i_4] [i_3]) + (((/* implicit */unsigned int) (+(((/* implicit */int) (short)28042)))))))), (((((/* implicit */_Bool) 3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_4]), (arr_12 [i_3 + 3] [i_3 + 3] [i_3]))))) : (var_6)))));
                var_16 -= (signed char)115;
                var_17 *= ((/* implicit */unsigned int) (_Bool)1);
                var_18 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)-26060)), (914288074822927795ULL)));
            }
        } 
    } 
}
