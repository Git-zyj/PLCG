/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67650
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
    var_20 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [(unsigned short)4] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_6)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (max((arr_2 [5U]), (((/* implicit */unsigned long long int) arr_5 [i_2] [(_Bool)1] [i_0 - 1]))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) ^ ((~(arr_1 [i_0 - 1])))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_0 [i_2]);
                    arr_10 [i_0] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-13999)) : (((/* implicit */int) (unsigned short)44536))))) ? (((((/* implicit */_Bool) max((3910881200U), (arr_6 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_0 [i_0]))))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (max((5683791235437803491ULL), (arr_2 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((var_3), (2066222709)))))))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_22 |= ((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_3 [i_3 - 1] [i_3 - 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_11 [(signed char)0]))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((min((330084372468775828LL), (((/* implicit */long long int) (unsigned short)4950)))) - (4930LL))))))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)16925)), (arr_6 [i_3]))))))), (((384086089U) & (384086095U))))))));
        var_24 = ((/* implicit */unsigned short) min((arr_2 [(unsigned short)9]), (((/* implicit */unsigned long long int) ((signed char) ((304565493U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)13998)))))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 7; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 1) 
            {
                {
                    arr_18 [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) == (min((min((6897093743575642706ULL), (((/* implicit */unsigned long long int) 904256292U)))), (arr_11 [i_3]))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) arr_15 [i_3] [i_3] [i_5] [4ULL])), (arr_2 [i_3]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) >> (((min((((/* implicit */long long int) 2663053180U)), (3639866714478969462LL))) - (2663053142LL))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        var_26 = ((/* implicit */int) (((_Bool)1) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6])))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) ((int) (signed char)-109));
                    arr_28 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_26 [i_7] [i_7] [i_7] [i_7]))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6]))) % (arr_23 [i_6] [i_6])));
                }
            } 
        } 
    }
    for (short i_9 = 0; i_9 < 13; i_9 += 1) 
    {
        var_29 = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30069))))), ((((_Bool)1) ? (((/* implicit */int) arr_19 [i_9])) : (((/* implicit */int) arr_26 [(unsigned char)6] [i_9] [(short)4] [i_9])))))));
        var_30 = ((/* implicit */unsigned long long int) ((short) ((((2919686918U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))))) < (((/* implicit */unsigned int) min((arr_25 [(unsigned char)18]), (((/* implicit */int) arr_29 [2]))))))));
        arr_32 [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_24 [i_9])) != ((+(7166991403523282135ULL)))));
        var_31 = ((/* implicit */signed char) min((max((((/* implicit */long long int) (signed char)116)), (4516921273749079368LL))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) | (((/* implicit */int) var_10)))))));
        var_32 = ((/* implicit */long long int) (+(4964273981746765036ULL)));
    }
    var_33 ^= ((/* implicit */int) min((var_2), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (var_12))))));
    var_34 *= ((unsigned int) ((((/* implicit */_Bool) min((3405225867U), (889741438U)))) ? (min((var_2), (((/* implicit */unsigned int) (short)-13987)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (var_14)))))));
    var_35 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */long long int) var_7)) > (min((var_6), (((/* implicit */long long int) var_7))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_5))))))));
}
