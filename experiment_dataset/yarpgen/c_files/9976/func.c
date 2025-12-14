/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9976
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
    var_17 |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2687389979U)))) : (min((((/* implicit */unsigned long long int) var_7)), (8028063468740011009ULL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_12 [i_4 - 1] [i_3 + 3] [i_2] [4U] [i_0] = ((/* implicit */unsigned short) ((_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) arr_4 [i_2 + 1] [i_3 + 1] [i_3 + 2] [i_4 + 1])) : (10028569765164393391ULL))));
                                var_18 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_0] [i_1] [i_2 - 2] [i_2] [i_3] [i_4 + 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1)))))) : (((4044151542U) & (2687389966U)))))) & (((((((/* implicit */_Bool) (short)-3984)) ? (((/* implicit */long long int) 663460483)) : (6331052388720315618LL))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26183))))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned long long int) (+(min((var_6), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32766)))))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) min((-983730508), (((/* implicit */int) (short)-32747))))) ? (arr_6 [i_6 + 1]) : (((((/* implicit */_Bool) arr_17 [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 3])) ? (arr_3 [i_6 + 2]) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_5] [i_6] [i_6 + 3])))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 2032U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((int) var_8)))))) | (min((arr_6 [i_0]), (arr_6 [i_1])))));
            }
        } 
    } 
}
