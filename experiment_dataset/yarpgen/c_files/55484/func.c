/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55484
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
    var_19 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_8);
        var_20 = ((/* implicit */unsigned short) (-(arr_2 [i_0])));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_0 [i_1] [i_0])), (((unsigned int) (-(((/* implicit */int) (signed char)66)))))));
            var_22 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) min(((short)16965), (((/* implicit */short) (signed char)66)))))) < (((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56285))) : (4194304U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)7737))))) : (((/* implicit */int) (unsigned short)9250))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_23 |= (-(((((var_3) != (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)92))) : (2956654629910324638LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_2 + 2] [i_2] [i_2 - 1]))))));
                            var_24 = ((/* implicit */signed char) (-(max((min((1180406562831636000LL), (((/* implicit */long long int) arr_6 [i_4])))), (((/* implicit */long long int) var_7))))));
                            var_25 = ((/* implicit */signed char) arr_9 [i_4] [(signed char)4]);
                            arr_13 [i_4] [i_2] [i_2] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) (+((~(arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 2])))));
                            arr_14 [i_4] [(signed char)16] [i_3] [i_4] [i_1] [14U] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10956)) ? (((/* implicit */int) (short)-32574)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((unsigned short)60448), (arr_10 [i_4] [i_3] [i_2] [3ULL] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9251)) || (((/* implicit */_Bool) var_14)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((short) var_7)))) / (arr_2 [i_2 + 2]))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_4] [i_0])) ? (arr_4 [i_3]) : (var_14)))))));
                        }
                    } 
                } 
            } 
            arr_15 [(unsigned short)16] [(unsigned short)16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19597)) ? (-1351879822324021988LL) : (9192245149945683873LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)9251)), (var_2))))))) : (((/* implicit */int) max((max((arr_10 [2LL] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */unsigned short) arr_7 [i_1] [i_0] [i_0])))), (((/* implicit */unsigned short) (signed char)77)))))));
            arr_16 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)32573), ((short)9233)))) ? (max((((/* implicit */long long int) (signed char)-18)), (arr_8 [i_1] [(short)14] [i_0]))) : (max((arr_9 [i_1] [i_0]), (((/* implicit */long long int) arr_0 [i_1] [i_0]))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 21; i_6 += 4) 
        {
            {
                var_26 ^= ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6] [i_5])) || (((/* implicit */_Bool) arr_18 [i_6] [(short)8])))))))) - (min((((((/* implicit */_Bool) arr_19 [i_6] [i_5])) ? (2948218396U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43415)) ? (((/* implicit */int) (unsigned short)9236)) : (((/* implicit */int) (unsigned short)55559)))))))));
                var_27 = ((/* implicit */short) min(((~(min((((/* implicit */long long int) var_0)), (var_17))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)56281), (((/* implicit */unsigned short) (signed char)50))))) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) (short)12482)))) : (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (long long int i_7 = 4; i_7 < 20; i_7 += 2) 
                {
                    for (signed char i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            {
                                arr_29 [i_9] [i_8] [i_7 + 1] [i_6 + 1] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_5])) ? (((/* implicit */int) arr_18 [i_5] [i_5])) : (((/* implicit */int) (signed char)-26))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_18 [i_7 - 1] [i_6])) : (((/* implicit */int) arr_18 [i_7 + 2] [i_5])))) : ((+(((/* implicit */int) (unsigned short)65535))))));
                                var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_22 [i_9] [i_7 + 3] [i_7 + 3])) ? (2948218396U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9] [i_9] [i_5] [i_8] [i_5] [i_6] [i_5]))))), (((/* implicit */unsigned int) max((arr_22 [i_7] [i_7] [i_5]), ((signed char)15))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6 - 1] [i_8] [i_7] [i_6 - 1] [6LL]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_9] [i_5] [i_5] [i_5] [i_5])) ? (arr_25 [i_9] [i_8 - 1] [i_5] [i_5] [i_5]) : (arr_25 [i_9] [i_8 + 1] [i_6 - 2] [i_6 - 2] [i_5])))) ? (((6550606937608360081LL) | (7096682721852679629LL))) : (var_16)))));
                                var_29 = ((/* implicit */unsigned long long int) ((unsigned char) arr_25 [i_9] [i_8] [i_7 - 3] [i_5] [i_5]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
