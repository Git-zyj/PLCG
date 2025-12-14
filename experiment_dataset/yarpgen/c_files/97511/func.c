/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97511
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) arr_6 [1ULL]);
                var_17 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) var_9)))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_14)))) <= ((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) var_15)))))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) (signed char)-80);
            }
        } 
    } 
    var_18 = ((var_4) | (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_2))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 8; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        arr_20 [i_2] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_2 [i_2])))), (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (arr_18 [i_2] [(unsigned char)7] [i_5] [(unsigned char)7] [i_2] [i_2]))))))) ? (max((((/* implicit */int) ((signed char) arr_11 [i_2] [i_3] [i_5]))), ((~(var_14))))) : (((/* implicit */int) ((_Bool) arr_17 [i_2] [i_3 + 1] [i_3 + 2])))));
                        var_19 = ((/* implicit */int) min((var_19), (max((((/* implicit */int) (unsigned short)31849)), (1573241946)))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_3 [i_2] [i_2])))), ((+(((/* implicit */int) (unsigned char)90))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((((/* implicit */int) (unsigned char)229)) >= (((/* implicit */int) (short)6999)))))));
    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))) : (-8455059085089853363LL)))) ? (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_0)))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : ((~(var_15))))) - (193LL)))));
}
