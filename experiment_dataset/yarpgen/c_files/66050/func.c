/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66050
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((((/* implicit */_Bool) ((((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-17071))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((1655712272221414717LL) <= (((/* implicit */long long int) 16252928))))))))) ? (((/* implicit */int) ((((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) (short)27808))))) > (((long long int) (short)(-32767 - 1)))))) : (((/* implicit */int) var_16)));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned char)6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (var_8)))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned short)39484))))));
                var_18 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8))))));
    var_20 = -1655712272221414717LL;
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(12))))));
                                arr_19 [i_4] [i_6] [i_5] [i_4] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 90338922U)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) ((signed char) -1655712272221414717LL))) : (((/* implicit */int) ((signed char) 12513213519233701695ULL))))) : (((((/* implicit */_Bool) min((arr_11 [(signed char)3] [i_4] [(short)17]), (((/* implicit */unsigned int) (short)200))))) ? (((((/* implicit */_Bool) 786220552U)) ? (1397998538) : (((/* implicit */int) (unsigned short)31219)))) : (((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (((+(((/* implicit */int) arr_8 [i_3])))) > (((/* implicit */int) min((arr_12 [(_Bool)1] [i_3] [i_4]), (((/* implicit */unsigned short) (short)-13430)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_10 [i_4]))))))))));
                    var_23 = min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (arr_10 [i_4 + 1]))), (((_Bool) arr_14 [i_3 + 3] [(_Bool)1] [i_4] [i_4] [i_4 + 1] [i_2])));
                }
            } 
        } 
    } 
}
