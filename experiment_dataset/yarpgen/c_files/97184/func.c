/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97184
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
    var_11 = ((/* implicit */unsigned char) var_1);
    var_12 ^= ((/* implicit */short) ((var_7) + (((/* implicit */int) ((short) (+(1949216853961673633LL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) (~(2179813881U)));
                            arr_9 [i_0 + 2] [i_1] [(_Bool)1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (max((((arr_2 [i_0] [i_1] [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 1])))) : (((arr_8 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 1] [i_2]) | (arr_8 [i_0 - 1] [i_0] [i_0 + 1] [(_Bool)1] [i_0 + 2] [i_3])))));
                        }
                    } 
                } 
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-40))) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) var_10))))), (((max((((/* implicit */long long int) var_10)), (-1949216853961673627LL))) * (((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 + 2]))))));
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_0 + 1] [i_0 + 2] [i_0])) ? (var_7) : (((/* implicit */int) arr_7 [(unsigned short)6] [i_0] [i_0 - 1] [i_1])))) < (((/* implicit */int) ((_Bool) max((((/* implicit */int) var_0)), (var_7)))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_14 ^= ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) var_5)))));
                            arr_16 [i_5] [i_5] [i_4] [i_0 - 1] [i_4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (var_7))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1949216853961673644LL)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (_Bool)0))))) & (-1949216853961673634LL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) & (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((/* implicit */int) (unsigned short)11342)) - (11330)))))) ? (((/* implicit */int) ((1949216853961673633LL) <= (-1949216853961673634LL)))) : (((/* implicit */int) var_9))))));
}
