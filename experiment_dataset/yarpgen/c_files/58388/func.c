/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58388
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned short) (signed char)-118);
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (signed char)-118))) ? ((-(((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))))))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned long long int) (!(((var_16) != (var_6)))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned char i_4 = 3; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) arr_0 [i_4]);
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (signed char)116))));
                        var_19 = (-(((/* implicit */int) (signed char)116)));
                    }
                } 
            } 
            var_20 += ((/* implicit */unsigned long long int) (signed char)124);
            arr_16 [i_2] = ((/* implicit */unsigned int) (unsigned short)10575);
        }
        var_21 = ((/* implicit */unsigned int) 12911552615192046082ULL);
    }
    for (long long int i_5 = 2; i_5 < 21; i_5 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))) : (var_16))))) * (((/* implicit */long long int) (-((+(arr_18 [i_5])))))))))));
        arr_19 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8191686879243045222ULL)) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) (signed char)54)))))));
    }
    for (int i_6 = 3; i_6 < 13; i_6 += 3) 
    {
        var_23 = ((/* implicit */int) arr_17 [i_6]);
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (~(2054517632U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)25511)) ? (((/* implicit */int) arr_17 [i_6 - 1])) : (((/* implicit */int) (signed char)-125))))) : (min((((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)89))) : (-5000553406784873143LL))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)116)))))))));
    }
    /* vectorizable */
    for (long long int i_7 = 3; i_7 < 15; i_7 += 1) 
    {
        arr_26 [i_7] = ((/* implicit */signed char) arr_23 [i_7]);
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            arr_29 [i_7] [i_8] [i_8] &= ((/* implicit */signed char) (~(((/* implicit */int) arr_17 [i_7 - 2]))));
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3664457578U)) ? (((/* implicit */long long int) 3173336159U)) : (-4834989447485800930LL))))));
        }
        arr_30 [i_7] = ((/* implicit */unsigned int) (+((-(var_12)))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) arr_17 [i_7 - 1])) : (((/* implicit */int) (unsigned short)65520)))))));
    }
    var_27 = ((/* implicit */long long int) var_0);
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > ((~(min((730582395U), (((/* implicit */unsigned int) 123636281))))))));
    var_29 = ((/* implicit */unsigned int) max((var_29), (483377634U)));
}
