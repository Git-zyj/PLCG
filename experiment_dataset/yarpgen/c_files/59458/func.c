/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59458
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
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) -1020295054)) ? (10155756371138333714ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26978)))));
        var_17 = ((arr_3 [i_0]) % (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(max((12516788366946980148ULL), (((/* implicit */unsigned long long int) min((var_4), (1797115967)))))))))));
                        arr_12 [i_1] [i_2] [i_4] [i_4] [i_4] [(signed char)6] = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_8)), (arr_10 [i_3] [i_4] [6U] [i_4] [i_1] [i_4]))));
                        var_19 = ((/* implicit */unsigned long long int) var_5);
                    }
                } 
            } 
        } 
        var_20 = ((((/* implicit */_Bool) var_1)) ? (((min((((/* implicit */unsigned long long int) var_5)), (449309589936561065ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))) : (min((((/* implicit */unsigned long long int) 3686271851U)), (2633449916103138702ULL))));
        var_21 += ((/* implicit */unsigned int) arr_1 [i_1]);
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
    {
        var_22 = ((((/* implicit */_Bool) arr_3 [i_5])) ? (((((/* implicit */_Bool) -355611949732081378LL)) ? (((/* implicit */unsigned long long int) 3686271851U)) : (9713156836720504956ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
        var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)101))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            var_24 |= (-(arr_14 [i_5]));
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (arr_8 [i_5] [i_6] [i_5] [i_5]) : (((/* implicit */unsigned long long int) var_8))))) ? (3113042477U) : (((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6]))))))))));
        }
    }
    var_26 = ((/* implicit */unsigned long long int) var_6);
    var_27 = ((/* implicit */signed char) min((((unsigned long long int) var_3)), (((((-329903151) != (((/* implicit */int) (signed char)-4)))) ? (min((var_12), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8238238454204403674ULL))))))))));
    var_28 ^= var_9;
}
