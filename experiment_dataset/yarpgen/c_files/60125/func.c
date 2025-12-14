/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60125
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
    var_11 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [(short)11] [i_1] [i_0] = ((/* implicit */unsigned short) max((min((max((18446744073709551606ULL), (((/* implicit */unsigned long long int) -1638578901)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned short)16))))))), (((/* implicit */unsigned long long int) max((max(((unsigned short)63017), ((unsigned short)790))), (((/* implicit */unsigned short) (unsigned char)32)))))));
                    var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (short)-3))))), (min(((unsigned short)27989), (((/* implicit */unsigned short) (short)-3219))))));
                    var_13 = max((((((/* implicit */int) (_Bool)0)) & (-1638578883))), (max((802866280), (((/* implicit */int) (unsigned short)790)))));
                }
            } 
        } 
    } 
}
