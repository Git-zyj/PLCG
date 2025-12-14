/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84553
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
    var_20 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (min((var_14), (((/* implicit */unsigned long long int) 0U)))))), (((/* implicit */unsigned long long int) var_13))));
    var_21 = ((/* implicit */_Bool) min((var_10), (((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) (((-(arr_1 [i_1]))) <= (((/* implicit */long long int) ((unsigned int) arr_1 [i_1])))));
                    var_23 = ((/* implicit */short) ((arr_8 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) var_17)) != (((var_2) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_11)))))))));
                    arr_9 [i_0] = ((/* implicit */unsigned int) (-(min((1152921504606846968LL), (((/* implicit */long long int) 1109638006U))))));
                }
            } 
        } 
        arr_10 [(signed char)5] = ((/* implicit */unsigned short) ((unsigned int) ((long long int) -1111030372644382936LL)));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((1111030372644382928LL) == (((/* implicit */long long int) 766056655U))))) : (((/* implicit */int) var_16))))));
        var_25 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 288221580058689536ULL))) && (((/* implicit */_Bool) var_16))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_12)) : (var_3)))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            arr_15 [6U] [6U] [i_3] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) max((arr_7 [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) ((var_3) >= (((/* implicit */long long int) 0U))))))));
            var_26 += ((/* implicit */_Bool) ((1111030372644382928LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12444)))));
            arr_16 [(signed char)9] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_18)))))))) : (((((/* implicit */_Bool) (-(4278039353U)))) ? ((-(var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)53091))))))));
        }
    }
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((16ULL) % (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) var_7))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) var_7)), (var_11))))))));
    var_28 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)3072)));
}
