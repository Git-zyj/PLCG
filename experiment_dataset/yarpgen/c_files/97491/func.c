/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97491
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
    var_19 = ((/* implicit */long long int) var_9);
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7128781005391534931LL)) ? (11499356930635042320ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208)))));
    var_21 = max((((/* implicit */long long int) ((((/* implicit */_Bool) 366175654U)) ? (((/* implicit */int) max(((unsigned char)208), (((/* implicit */unsigned char) var_15))))) : ((~(((/* implicit */int) (unsigned char)48))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_17)) + (((/* implicit */int) var_0))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))) / (var_2))) : (((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) var_18))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_22 = (-(arr_1 [i_0 + 3] [i_0]));
        var_23 &= ((/* implicit */unsigned long long int) ((-74747206245642297LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            var_24 = ((/* implicit */long long int) ((unsigned long long int) arr_1 [i_1] [i_1]));
            var_25 = ((/* implicit */unsigned short) max(((+(arr_6 [i_2 + 1] [i_2 + 1]))), (((/* implicit */long long int) ((int) arr_7 [i_1] [i_1])))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)222))));
            arr_10 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_9 [(signed char)9] [i_3]) % (arr_1 [i_1] [i_1]))) > (((var_3) ^ (arr_5 [i_1]))))))) * (min((((/* implicit */unsigned long long int) (unsigned char)208)), (6947387143074509294ULL)))));
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                arr_13 [i_1] [i_3] [i_4] [i_3] = ((((/* implicit */_Bool) 6ULL)) ? (min((arr_5 [i_4]), (((/* implicit */long long int) arr_8 [i_4] [i_3])))) : (((max((8066184420973809833LL), (((/* implicit */long long int) (unsigned char)208)))) >> (((15859228120034724668ULL) - (15859228120034724641ULL))))));
                var_27 -= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2219020444U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)197)))))) ? (min((((unsigned long long int) arr_4 [i_1])), (((/* implicit */unsigned long long int) (-(arr_11 [i_1] [i_1] [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1701216997U)) && (var_14))) ? (((/* implicit */int) arr_7 [i_3] [i_4])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)40)) == (((/* implicit */int) (unsigned char)27))))))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    arr_17 [i_4] [i_5] = ((/* implicit */unsigned char) -915789830);
                    var_28 = ((/* implicit */short) var_15);
                    var_29 = 1078657495;
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        arr_20 [i_1] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) ((unsigned short) (unsigned char)227))))) : (((/* implicit */int) (unsigned char)55))));
                        var_30 = arr_16 [i_4] [i_3] [i_3] [i_3] [i_3];
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_14) ? (((arr_11 [i_1] [i_1] [i_4] [i_5]) & (((/* implicit */int) arr_4 [(_Bool)1])))) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_11 [i_1] [i_3] [i_4] [i_5])) > (var_1))))))) ? (((((/* implicit */_Bool) var_12)) ? (arr_19 [i_1] [i_1] [i_1] [i_1]) : (arr_19 [i_1] [i_3] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38)))));
                        var_32 = ((/* implicit */int) min((arr_9 [i_6] [i_3]), (((/* implicit */long long int) var_7))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        var_33 = ((/* implicit */long long int) var_5);
                        arr_24 [(_Bool)1] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11499356930635042320ULL)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) arr_7 [i_1] [i_1]))));
                    }
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)40))));
                        arr_27 [i_1] [i_4] [i_4] [i_1] [4LL] [i_8] [i_3] = ((/* implicit */long long int) (~(3555779730292156617ULL)));
                        arr_28 [i_5] [i_4] = ((/* implicit */unsigned long long int) arr_25 [i_4] [(_Bool)1] [i_4]);
                        var_35 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (14890964343417394999ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))));
                    }
                }
            }
        }
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) % ((~((-(arr_9 [i_1] [i_1])))))));
    }
}
