/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86739
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned char) (-(((/* implicit */int) (short)27479))));
        arr_2 [i_0 + 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (short)-20041)), ((unsigned short)65530)));
        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-20041))));
    }
    for (short i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_18 = ((/* implicit */short) 6675326397522944664LL);
        var_19 = ((/* implicit */long long int) max((18204096123122492762ULL), (((/* implicit */unsigned long long int) (short)20041))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)20040))))) ? (min((((/* implicit */unsigned long long int) (-(1652075828)))), (((unsigned long long int) (signed char)113)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((arr_4 [i_1]) + (((/* implicit */long long int) 1652075828)))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43919)) ? (((/* implicit */int) (short)-20030)) : (((/* implicit */int) (short)23727))));
        var_22 = ((/* implicit */unsigned long long int) arr_1 [i_2] [i_2 + 1]);
        var_23 = ((/* implicit */unsigned char) var_2);
        var_24 = ((/* implicit */short) ((((/* implicit */int) (((~(((/* implicit */int) (short)20041)))) != (((/* implicit */int) arr_5 [i_2 + 1]))))) & (((((/* implicit */int) (unsigned short)32972)) ^ (((/* implicit */int) arr_5 [i_2 + 1]))))));
    }
    var_25 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)64)), ((short)21521))))))), (((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (short)-20030))))))));
}
