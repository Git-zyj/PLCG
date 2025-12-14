/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55073
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)241)) + (((/* implicit */int) (short)-6172))))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_6))))) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) * (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (min((var_15), (((/* implicit */long long int) var_14))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-22392)) : (((/* implicit */int) var_8))))), (var_5)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (signed char)-115))));
                        var_18 = ((/* implicit */short) ((((/* implicit */int) (signed char)1)) % (((/* implicit */int) arr_11 [i_1 - 1] [(short)9] [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18903)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (signed char)117))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_0] [i_4] [17U]))) : (((var_15) & (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_14 [i_0] [12ULL] [i_0]))));
                var_21 = ((/* implicit */signed char) var_10);
            }
            for (signed char i_5 = 3; i_5 < 23; i_5 += 4) 
            {
                var_22 = ((/* implicit */short) ((var_15) <= (var_7)));
                var_23 = (short)-29060;
                var_24 &= var_12;
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_1] [i_1 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_17 [i_0] [i_1 - 1]))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) ((signed char) var_2));
                var_27 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)122)) * (((((/* implicit */int) var_11)) * (((/* implicit */int) arr_1 [i_0]))))));
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_0] [i_1 - 1])) : (((/* implicit */int) (short)0)))))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_6] [i_1 - 1] [i_0] [i_0])) | (((/* implicit */int) (short)-25010))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1212)) || ((_Bool)0)));
            }
            var_31 *= ((/* implicit */signed char) 191576629726834207LL);
            var_32 |= ((/* implicit */signed char) (unsigned char)156);
            var_33 = ((/* implicit */short) var_12);
        }
        /* vectorizable */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_34 &= ((/* implicit */signed char) var_2);
            /* LoopSeq 1 */
            for (short i_8 = 1; i_8 < 23; i_8 += 1) 
            {
                var_35 = ((/* implicit */short) ((var_9) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))) : (var_15)));
                var_36 += -8823650144901862339LL;
            }
            var_37 = ((/* implicit */long long int) (((~(arr_10 [i_0] [i_0] [i_0] [i_7]))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))));
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_7 - 1] [i_7 - 1] [i_7 - 1])) || (((/* implicit */_Bool) arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_31 [i_9] [i_9] [(short)13] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) var_13)) : ((+(((/* implicit */int) (signed char)-45)))))) : ((~(((/* implicit */int) (_Bool)1))))));
            var_39 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_25 [i_0] [i_9])) ? (((/* implicit */int) arr_25 [i_0] [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_0]))))));
            var_40 = max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))) >= (((/* implicit */int) var_6))))), (arr_19 [i_9]));
            var_41 |= ((/* implicit */long long int) (((-(((/* implicit */int) arr_30 [i_9] [i_0])))) | (((/* implicit */int) arr_18 [i_0] [i_9] [i_0]))));
        }
        for (short i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            var_42 = (-(((((/* implicit */_Bool) min((var_10), (((/* implicit */short) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_2), (var_13))))) : (((((/* implicit */_Bool) 13174449669892302822ULL)) ? (((/* implicit */long long int) 4294967295U)) : (9223372036854775807LL))))));
            var_43 = ((((9223372036854775807LL) >> (((4294967277U) - (4294967245U))))) + (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)-55))))))));
        }
        var_44 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_13)), ((-(var_15)))))));
        var_45 = ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])))) + (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_27 [(unsigned char)20] [(short)12] [i_0] [i_0])) : (((/* implicit */int) arr_4 [(signed char)13] [i_0]))))));
    }
    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (min((((/* implicit */long long int) var_12)), (1670602542828205686LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)3)) + (((/* implicit */int) min((((/* implicit */short) var_1)), (var_13))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (var_14)))));
    var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((int) 4294967282U)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (4294967284U)))))) - ((-(((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_8)))))))))));
    var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) var_3))));
}
