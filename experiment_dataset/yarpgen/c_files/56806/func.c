/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56806
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */signed char) min((2518234373004268493ULL), ((+((+(12692039946279297905ULL)))))));
                    arr_7 [i_2] = ((/* implicit */unsigned char) ((((arr_4 [i_2 - 2] [i_2 + 2]) & (((/* implicit */unsigned int) -1533318409)))) >= (((/* implicit */unsigned int) ((int) (unsigned char)137)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((6737711008934108555ULL), (((/* implicit */unsigned long long int) (short)-2252))))) ? (var_4) : (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) (short)12777))))))));
    var_16 = ((/* implicit */int) var_1);
}
