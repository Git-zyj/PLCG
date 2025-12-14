/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55405
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) << (((((/* implicit */int) ((unsigned short) (unsigned char)255))) - (252)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)26047)) && (((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 3] [i_1 + 3])))) ? (((/* implicit */int) ((min((-8664079080998209452LL), (((/* implicit */long long int) (unsigned char)98)))) > (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)1), (var_10)))))))) : (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_0 [i_0])), ((unsigned char)3)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (signed char)103);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */unsigned long long int) -1LL)) <= (arr_8 [i_2])))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) (signed char)67)));
    }
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) var_0);
        var_20 += ((/* implicit */unsigned short) (~(min((arr_12 [i_3] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-31551)) == (((/* implicit */int) var_6)))))))));
    }
    var_21 = (+(((unsigned int) (unsigned char)245)));
    var_22 = ((/* implicit */unsigned short) var_4);
}
