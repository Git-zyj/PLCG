/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69728
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
    var_14 = ((/* implicit */_Bool) min((var_14), ((((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) | (((((/* implicit */_Bool) 2813890418167071957LL)) ? (2813890418167071957LL) : (2813890418167071957LL))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)1)))) : (((min((((/* implicit */long long int) (short)-2)), (2813890418167071973LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
        arr_3 [i_0] [i_0] = (~(min(((~(1023U))), (((/* implicit */unsigned int) ((unsigned char) 6754319759214241333LL))))));
    }
    for (short i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) var_1);
        var_17 = ((/* implicit */short) min((((long long int) 1565840890U)), ((~(-2813890418167071957LL)))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1565840890U)) ? (((/* implicit */int) ((unsigned char) var_13))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1859153343)))))))) | ((-(max((var_7), (((/* implicit */unsigned int) var_10))))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) -1);
    }
    for (short i_2 = 1; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] [i_2 + 1] = ((/* implicit */unsigned short) ((unsigned char) var_6));
        var_19 -= ((/* implicit */unsigned int) min((((long long int) ((int) (unsigned char)202))), (((((/* implicit */_Bool) 2813890418167071957LL)) ? (2813890418167071996LL) : (((/* implicit */long long int) ((unsigned int) -2813890418167071973LL)))))));
        var_20 = ((/* implicit */int) (_Bool)0);
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_13))));
        arr_10 [18] [i_2] = ((/* implicit */int) 3178302316U);
    }
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned short) var_12)))));
}
