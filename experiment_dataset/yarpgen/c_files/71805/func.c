/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71805
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (short)-3888)) : (((/* implicit */int) ((short) (signed char)69)))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) 2626113428U))));
        var_19 |= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_20 |= ((/* implicit */long long int) var_13);
        var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) 3319608346U)) ? ((-2147483647 - 1)) : ((-2147483647 - 1))))))) ? (((((/* implicit */_Bool) 7027267920987028565LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-87))) : (6027508791468658405LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32132)))));
        var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) % (((/* implicit */int) var_9))));
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (max((((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 2] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_5 [i_2 + 2] [i_2 + 1]))), (((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */long long int) 2147483647))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (max((((/* implicit */long long int) (_Bool)1)), (var_4)))))))));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((arr_3 [i_1]), (var_6))))));
            var_25 |= ((/* implicit */long long int) (-((-(4294967295U)))));
            var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2 - 2])) + (11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2 + 1]))))) : ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) arr_3 [i_2 + 2]))))));
        }
        for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) var_15)))), (((((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))))))));
            var_28 -= ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))))));
        }
        var_29 ^= ((/* implicit */unsigned long long int) ((arr_1 [i_1]) > (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)13947)))));
        var_31 += ((/* implicit */unsigned short) var_3);
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (~(2147483634))))));
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            var_33 += ((/* implicit */unsigned int) (~(((int) var_6))));
            var_34 *= ((/* implicit */unsigned char) arr_5 [i_4] [i_5]);
            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_5] [(short)1])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_36 *= ((/* implicit */_Bool) (~((-(5333604234527606218LL)))));
                        var_37 -= ((/* implicit */long long int) (signed char)65);
                    }
                } 
            } 
            var_38 |= ((/* implicit */long long int) ((((arr_7 [i_5] [i_4] [i_4]) % (var_7))) > (2337420943771833473LL)));
        }
        for (int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            var_39 += ((/* implicit */short) (~((~(((/* implicit */int) (unsigned short)65515))))));
            var_40 = (+(-7626089485412824131LL));
            var_41 -= ((/* implicit */_Bool) var_7);
        }
        for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            arr_22 [i_4] [i_9] &= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4]))))));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) var_7))));
                var_43 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (var_16))))) != (arr_5 [i_4] [i_9])));
                var_44 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)72)) > (309047900))))) != (var_11)));
            }
            var_45 -= ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned char)134))))) : (var_10));
            var_46 |= ((/* implicit */unsigned char) (+(var_4)));
        }
        var_47 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_4] [i_4]))));
    }
    var_48 ^= ((/* implicit */short) min(((!(((/* implicit */_Bool) ((var_7) % (((/* implicit */long long int) var_10))))))), (max(((!(((/* implicit */_Bool) -1715717196)))), (var_14)))));
    var_49 += ((/* implicit */unsigned char) ((((8322734840762288390LL) / (((/* implicit */long long int) (-(1478891283U)))))) - (var_2)));
    var_50 *= ((/* implicit */unsigned long long int) (signed char)1);
}
