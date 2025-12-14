/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75835
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
    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)235)) && (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_15))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (-(-7594847206807961650LL)));
        var_21 = ((/* implicit */_Bool) max((min(((~(-4798109222904668858LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)21))))))), (((/* implicit */long long int) ((max((((/* implicit */int) arr_2 [i_0] [i_0])), (var_4))) >= ((-(((/* implicit */int) var_8)))))))));
        arr_4 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) (unsigned char)21)) != (((/* implicit */int) (unsigned char)217)))))))) * ((~(((var_11) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] &= ((/* implicit */unsigned long long int) (-((+((~(1657037079)))))));
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)112)))) / (((/* implicit */int) ((((/* implicit */int) (unsigned short)8)) <= (1657037079))))))) == (min((((/* implicit */long long int) min((var_17), (var_17)))), (max((-1LL), (((/* implicit */long long int) arr_2 [i_1] [i_1]))))))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_23 += ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)124))))) <= (((/* implicit */int) (signed char)-37))));
                        var_24 = ((/* implicit */signed char) max((min((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_14 [16U] [(short)2])), (var_14)))), (((((/* implicit */long long int) ((/* implicit */int) var_16))) - (arr_11 [(signed char)13] [19] [i_2] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_4] [i_2])), (arr_1 [i_1] [6LL])))) || (((((/* implicit */_Bool) (unsigned char)235)) && (((/* implicit */_Bool) 1650603973)))))))));
                        arr_17 [i_3] [i_3] [i_2] [i_3] |= ((/* implicit */long long int) min((((/* implicit */int) min(((signed char)-37), (((/* implicit */signed char) ((-3433866615425492193LL) <= (-4816907458875595050LL))))))), (268435456)));
                    }
                } 
            } 
        } 
        var_25 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)5287))));
        var_26 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((-(arr_9 [i_1] [i_1] [i_1]))), (((/* implicit */long long int) (~(var_1)))))))));
    }
    var_27 |= ((/* implicit */short) max(((((+(((/* implicit */int) (signed char)-37)))) - (((((/* implicit */int) (signed char)(-127 - 1))) - (-815920016))))), (((/* implicit */int) min(((short)5793), (((/* implicit */short) (_Bool)0)))))));
}
