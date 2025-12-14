/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89502
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (short)-24175)) ? (-1592723424) : (((/* implicit */int) (short)-24195)))) : ((~(((/* implicit */int) (signed char)0))))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0])))) : (((((/* implicit */_Bool) (short)24170)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (short)24175))))));
                var_16 = ((/* implicit */_Bool) min((((/* implicit */int) (short)-24181)), (((((/* implicit */_Bool) (+(var_10)))) ? (min((-1689876939), (((/* implicit */int) (short)17127)))) : (((/* implicit */int) arr_5 [(short)11] [i_1]))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_0 [i_0]))));
                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)3] [i_1]))) * (((((/* implicit */_Bool) 2419553740U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-24195))))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                arr_14 [11U] [11U] |= ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) max((((/* implicit */short) (signed char)-1)), (var_5)))) ^ (((/* implicit */int) max(((short)24195), ((short)24202)))))));
                arr_15 [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_9 [i_2 - 2])) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) var_9)))), ((~(((/* implicit */int) arr_7 [i_2 - 1]))))));
                arr_16 [i_2] = ((/* implicit */short) arr_6 [(_Bool)1]);
                var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_13 [i_2] [i_2] [i_2 - 1]), (((/* implicit */long long int) 128031024U))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [5U] [i_3] [i_2])))))));
                var_20 = ((/* implicit */long long int) var_13);
            }
        } 
    } 
}
