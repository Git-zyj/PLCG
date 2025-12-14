/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55750
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
    var_20 = ((/* implicit */signed char) (unsigned char)159);
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_2) : (var_14))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))))))))));
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6001842904148461055LL)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) >= (var_12))))))))));
    var_23 |= ((/* implicit */unsigned int) var_13);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (17027842726018474516ULL)));
        var_25 = ((/* implicit */signed char) ((unsigned long long int) var_14));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_26 = ((((/* implicit */_Bool) ((arr_2 [i_1] [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))) ? ((((~(((/* implicit */int) arr_1 [i_1])))) - ((~(((/* implicit */int) var_10)))))) : (((/* implicit */int) var_0)));
        var_27 = var_7;
        /* LoopSeq 4 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((unsigned int) max((var_8), (((/* implicit */short) max((var_11), (((/* implicit */unsigned char) var_13)))))))))));
            arr_8 [i_1] [i_1] [i_2] = ((long long int) ((arr_2 [i_1] [i_2]) ? (var_6) : (((/* implicit */unsigned int) var_2))));
        }
        for (signed char i_3 = 3; i_3 < 8; i_3 += 2) 
        {
            var_29 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)-2764)), (max((((/* implicit */unsigned long long int) 9095958023016979890LL)), (17027842726018474503ULL)))));
            var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) != (((/* implicit */int) arr_3 [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_3] [i_3])) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) arr_5 [i_3] [i_3]))))))) * (max((min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_3])), (arr_9 [i_1] [i_1] [0U]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
            arr_11 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) -428306994);
            var_31 = ((/* implicit */long long int) max(((unsigned short)38968), (((/* implicit */unsigned short) var_13))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((17027842726018474516ULL), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_4]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_4]))))) ? ((+(((/* implicit */int) arr_2 [i_1] [i_4])))) : (((/* implicit */int) max((arr_6 [i_1] [i_4]), (arr_2 [i_1] [i_4])))))))));
            arr_14 [i_1] = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_4]))));
            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
            var_34 += ((/* implicit */unsigned int) (signed char)-9);
        }
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            var_35 *= ((/* implicit */short) (signed char)-56);
            var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((var_17) ^ (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)37)))))) ? (((((/* implicit */_Bool) ((short) arr_2 [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_5]))) : (max((arr_7 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) var_11)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))));
            var_37 = ((/* implicit */unsigned long long int) max((var_37), (min(((+(((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_0 [i_1]))))), (((/* implicit */unsigned long long int) (~(arr_15 [i_1]))))))));
        }
        arr_18 [i_1] = ((/* implicit */short) arr_2 [i_1] [i_1]);
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
    {
        var_38 |= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6]))))), (((((arr_10 [i_6] [i_6] [i_6]) + (2147483647))) << (((((arr_10 [i_6] [i_6] [i_6]) + (1685981978))) - (26)))))));
        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) min(((-(var_5))), (((/* implicit */int) arr_5 [i_6] [6ULL])))))));
        arr_22 [i_6] [i_6] = ((/* implicit */short) ((unsigned short) (signed char)-1));
    }
}
