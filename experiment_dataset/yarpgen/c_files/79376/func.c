/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79376
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
    var_15 = (~(((/* implicit */int) (((~(((/* implicit */int) var_12)))) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((var_7) ? (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_13))) : (((/* implicit */unsigned long long int) (+(var_9)))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (short)23366))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)9036)))))) : (((((/* implicit */_Bool) (signed char)48)) ? (5414022904165643030LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))))))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */unsigned long long int) var_14))))))) && (((/* implicit */_Bool) (((+(var_3))) / ((-(((/* implicit */int) var_6)))))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((~(var_3))) : (((((/* implicit */int) (signed char)99)) >> (((((/* implicit */int) (signed char)-5)) + (17)))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(var_9)));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_12))));
        arr_15 [i_4] = ((/* implicit */int) var_6);
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */int) var_12)))) : (var_9))))));
                    arr_22 [i_6] [i_6] [i_7] = (((+(var_1))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (var_3)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 1; i_8 < 24; i_8 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (11616570094979243873ULL)))))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
        }
        var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0))) / (((/* implicit */long long int) ((var_6) ? (var_10) : (((/* implicit */int) var_5)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                for (signed char i_11 = 1; i_11 < 22; i_11 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (unsigned short)1553)) : (((/* implicit */int) (signed char)124))))) ? (((((/* implicit */_Bool) var_5)) ? (var_14) : (var_9))) : (((/* implicit */int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_13))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((var_10) << (((((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1))) - (1449459408581627017LL))))))));
                            var_29 = ((/* implicit */long long int) ((((((/* implicit */int) var_4)) != (((/* implicit */int) (signed char)-80)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))));
                            arr_36 [i_5] [i_9] [0ULL] [i_12] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (((~(var_3))) | (var_10)));
                        }
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) (signed char)88)))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_14) : (var_8)))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1)))))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_39 [i_5] [i_13] [7LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_12)) : (var_10)))) ? (((((/* implicit */int) var_4)) % (((/* implicit */int) var_11)))) : ((-(((/* implicit */int) var_4))))));
            /* LoopSeq 1 */
            for (short i_14 = 0; i_14 < 25; i_14 += 1) 
            {
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_7))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)76)))))));
                var_33 = var_4;
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 1; i_16 < 24; i_16 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) var_6);
                            var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)3109))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)193)) << (((((/* implicit */int) (unsigned short)1940)) - (1925)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0)));
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (var_3) : ((+(var_8))))))));
        }
    }
}
