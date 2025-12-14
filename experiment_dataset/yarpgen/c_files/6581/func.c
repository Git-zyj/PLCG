/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6581
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
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) min((min((((/* implicit */long long int) max((((/* implicit */int) (signed char)102)), (2097151)))), (var_8))), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 11ULL))))), (arr_2 [i_2]))))));
                    var_15 += ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) 4398046510592LL)), (14064800561929763880ULL))), (((/* implicit */unsigned long long int) min((arr_0 [i_0 + 2]), (((/* implicit */short) var_0)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */int) max(((-(2909560026U))), (((/* implicit */unsigned int) min((-2026894398), (((/* implicit */int) (unsigned char)42)))))));
                        var_17 *= ((/* implicit */signed char) (-(max((((/* implicit */long long int) var_0)), (arr_6 [i_2] [i_3 + 3] [i_3 - 1] [i_3 + 1])))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                    {
                        arr_12 [i_4 + 3] [i_2] [i_0 - 1] &= ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_11 [i_4 - 1] [i_4 + 3] [i_4 + 3] [i_1 + 1] [i_0 + 1]), (arr_11 [i_4 - 2] [i_2] [i_2] [i_1 - 1] [i_0 + 1]))))));
                        var_18 &= ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) (_Bool)1)), (arr_8 [i_1 - 1] [i_0 + 2])))));
                        var_19 &= ((/* implicit */int) max(((unsigned short)36287), (((/* implicit */unsigned short) (unsigned char)0))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (long long int i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 2])), (max(((unsigned short)37136), ((unsigned short)58937)))))))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-102)))))));
                var_22 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)6599))))), (max((((/* implicit */long long int) (+(((/* implicit */int) var_7))))), (max((((/* implicit */long long int) var_1)), (var_8)))))));
            }
        } 
    } 
}
