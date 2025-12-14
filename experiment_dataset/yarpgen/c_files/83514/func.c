/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83514
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))), ((+(9431177452792767457ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))))));
        var_10 = ((/* implicit */long long int) ((((((14296235425456714614ULL) < (((/* implicit */unsigned long long int) var_1)))) ? (max((13676821255344726602ULL), (439187329815949691ULL))) : (439187329815949688ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((4769922818364825022ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))), (var_7)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [(_Bool)1] = ((/* implicit */unsigned char) arr_4 [8] [3LL]);
        var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((min((arr_1 [i_1] [(signed char)5]), (arr_0 [7ULL]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) 439187329815949691ULL))))))))));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) / (min((9015566620916784159ULL), (((/* implicit */unsigned long long int) -338882746))))))))));
        var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)167)), (4769922818364825014ULL)));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_14 = 4282360089302282839LL;
        var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))) : (4662708298473878050ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_2])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            arr_12 [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_1 [i_2] [i_3]))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 2; i_4 < 19; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2])) ? (((arr_7 [i_4 + 1] [i_4 - 1]) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    arr_19 [i_2] [i_5] = ((signed char) arr_16 [i_2]);
                }
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 13784035775235673566ULL))))))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */int) arr_17 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) arr_17 [9ULL] [i_2] [9ULL] [i_2] [i_2]))));
                var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-67)) && (((/* implicit */_Bool) (signed char)-55)))))));
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2]))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 1) 
            {
                var_21 = var_1;
                arr_22 [i_2] [i_2] [i_6 - 1] &= ((/* implicit */unsigned char) arr_13 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1]);
                var_22 = ((/* implicit */int) ((((/* implicit */int) arr_15 [i_3] [i_3] [i_6 - 1])) < (((/* implicit */int) arr_15 [i_2] [i_2] [i_6 - 1]))));
            }
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -4282360089302282840LL)) / (458120356691813687ULL)));
                arr_26 [i_7] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))) : (var_9)))));
                var_24 = ((((/* implicit */_Bool) arr_21 [i_7] [i_3] [i_7])) ? (arr_21 [i_2] [i_3] [i_7]) : (((/* implicit */unsigned long long int) var_4)));
                arr_27 [i_7] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (signed char)63))))));
            }
            var_25 *= ((/* implicit */unsigned long long int) ((unsigned short) ((arr_10 [i_2]) ? (((/* implicit */int) arr_13 [i_2] [i_2] [(unsigned short)17] [17ULL])) : (((/* implicit */int) arr_1 [i_2] [i_2])))));
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) ((275550162) & (((/* implicit */int) arr_25 [i_2] [6ULL] [i_8]))));
            var_27 = (+((~(((/* implicit */int) var_5)))));
        }
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) - (((/* implicit */int) (short)25108)))) / ((-(arr_29 [i_2] [i_9] [i_9])))))) : (var_6)));
            var_29 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)0)), (((long long int) ((_Bool) var_8)))));
            arr_34 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_9] [i_2]))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_30 = (-(arr_35 [i_10] [i_9] [i_10]));
                var_31 -= ((/* implicit */int) min((min(((~(18007556743893601909ULL))), (((/* implicit */unsigned long long int) var_4)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2566373615048802274ULL)))))) / (var_3)))));
                var_32 = min((((/* implicit */signed char) ((((/* implicit */int) ((var_9) != (var_6)))) >= ((+(((/* implicit */int) arr_15 [i_2] [i_2] [i_10]))))))), ((signed char)93));
                var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_2) ? (arr_23 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned long long int) (!(var_2)))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_8 [1]) : (((/* implicit */unsigned long long int) -1151097736960606847LL))))))));
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            var_34 -= ((/* implicit */int) var_7);
            arr_40 [i_2] [i_2] [i_2] = ((_Bool) (unsigned char)89);
            var_35 = ((/* implicit */_Bool) ((signed char) arr_18 [i_2]));
            var_36 = ((/* implicit */unsigned char) ((arr_14 [i_2] [i_2] [5]) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [(signed char)16] [(_Bool)1] [(signed char)16])))));
        }
    }
    var_37 = ((/* implicit */unsigned long long int) (short)9577);
    var_38 = ((/* implicit */unsigned long long int) var_4);
}
