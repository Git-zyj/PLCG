/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58109
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_12))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0]))), (arr_1 [i_0] [i_0])));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((((((unsigned long long int) -5374067655571390761LL)) << (((arr_2 [i_0] [i_0]) - (8398980883200312008LL))))), (((((/* implicit */unsigned long long int) var_8)) & (((((/* implicit */unsigned long long int) var_17)) * (arr_1 [(short)9] [(short)9]))))))))));
        var_23 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)171))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */short) var_15);
            var_25 = ((/* implicit */signed char) min((max(((~(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((signed char) var_15))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_6)))) ? ((+(var_5))) : (min((var_6), (arr_2 [i_0] [i_0]))))))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */short) min((min((min((((/* implicit */long long int) (unsigned char)171)), (-7599479682944833344LL))), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) max((((/* implicit */int) arr_7 [i_0])), ((-(arr_6 [i_2]))))))));
            arr_8 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (_Bool)1)), (-452988425))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
            arr_9 [i_0] [i_0] = (-(((((arr_1 [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) ? (var_9) : (((/* implicit */int) min((arr_5 [i_0]), (arr_5 [i_0])))))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                var_27 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9146))))))));
                arr_18 [i_3] [i_3] = ((/* implicit */long long int) ((short) ((unsigned long long int) var_19)));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(19U)))) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) arr_25 [(unsigned short)3] [i_4] [i_5] [i_6] [(signed char)8] [4ULL] [i_3])))))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((7599479682944833332LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [(unsigned short)16])) != (((/* implicit */int) arr_22 [0] [i_4] [(_Bool)1] [i_6] [i_3] [i_5]))));
                        }
                    } 
                } 
                arr_26 [i_3] = ((/* implicit */short) arr_0 [i_3]);
                arr_27 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3])))))));
            }
            for (signed char i_8 = 2; i_8 < 14; i_8 += 3) 
            {
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? ((-(var_12))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_12 [i_4] [i_4])))));
                arr_30 [i_3] [i_3] [i_3] [15LL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (arr_6 [i_8]))))));
            }
            var_32 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_3] [i_4]) : (((/* implicit */unsigned long long int) var_5)))))));
        }
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) min((1564073134U), (((/* implicit */unsigned int) (_Bool)1)))))));
            var_34 = ((/* implicit */_Bool) var_6);
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */long long int) -966960319)) : (-7599479682944833350LL))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (arr_17 [i_3] [i_9] [i_9]) : (var_1))) != ((+(arr_2 [i_3] [(_Bool)1]))))))));
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 1) 
                {
                    for (short i_12 = 1; i_12 < 15; i_12 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)25940), (arr_7 [i_3]))))) > (max((((/* implicit */unsigned int) arr_31 [i_9] [i_11] [i_12])), (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9] [i_9]))))))))))));
                            var_37 ^= ((/* implicit */long long int) ((short) var_6));
                            arr_45 [i_9] [i_10] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((1538923286320135240ULL) > (((/* implicit */unsigned long long int) 363883195414812202LL)))))) <= (min((max((18446744073709551611ULL), (((/* implicit */unsigned long long int) (unsigned short)48561)))), (((/* implicit */unsigned long long int) ((int) 9285458628311210746ULL)))))));
                        }
                    } 
                } 
            } 
        }
        arr_46 [i_3] = ((/* implicit */signed char) var_3);
        var_38 = ((/* implicit */int) (-((((+(arr_37 [i_3] [i_3] [i_3] [i_3]))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_31 [i_3] [(_Bool)1] [i_3])), (var_16)))))))));
    }
}
