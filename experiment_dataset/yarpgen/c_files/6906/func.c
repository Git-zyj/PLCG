/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6906
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
    var_19 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) max((((int) var_3)), (((/* implicit */int) var_12))))) : (min((((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) (+(var_10)))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-13741)) == (var_10))))) : (((((((/* implicit */int) var_18)) > (var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (max((var_5), (((/* implicit */unsigned int) var_12))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_2 [(signed char)7] [i_0] [3LL])))) | (((/* implicit */int) ((((/* implicit */_Bool) -317200612914595898LL)) || (((/* implicit */_Bool) (short)-27652)))))))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) arr_1 [i_1 + 4] [i_0 - 3])))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */_Bool) (unsigned short)11809)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 3] [i_1 + 3] [i_1 + 3]))) : (arr_6 [i_0 - 1] [i_1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) ((max((((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))), (((/* implicit */long long int) var_0)))) ^ (((((((/* implicit */_Bool) 16164117050806549875ULL)) || (((/* implicit */_Bool) var_3)))) ? (min((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])), (-317200612914595898LL))) : (((/* implicit */long long int) ((155057266) * (((/* implicit */int) (unsigned short)0)))))))));
                }
                for (short i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
                {
                    arr_13 [i_1] [i_1] [i_0] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */unsigned long long int) -7490718555839546751LL)) : (2282627022903001731ULL)))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                arr_19 [i_5] [i_4] [i_3] [i_1 + 4] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (((((/* implicit */_Bool) max((arr_11 [i_0 + 1] [i_1]), (arr_2 [i_3] [i_1] [i_0])))) ? (max((((/* implicit */unsigned long long int) var_8)), (arr_18 [i_0] [i_1] [i_3] [(signed char)4]))) : (((/* implicit */unsigned long long int) (+(4427163703398143586LL))))))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (signed char)-63))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_6 = 2; i_6 < 10; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2779260852414419689LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)26025)) || (((/* implicit */_Bool) -7490718555839546737LL))))) : (((/* implicit */int) max(((signed char)63), ((signed char)125))))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)7065)) ? (8453326938229252472LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))))))));
                        arr_22 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60558)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0 - 2] [i_0] [i_0 - 2]), (((/* implicit */unsigned short) (signed char)-121))))))))) ? (((((((/* implicit */int) (short)-2901)) >= (((/* implicit */int) (unsigned short)38542)))) ? (max((((/* implicit */int) (signed char)-68)), (1382560516))) : (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_6]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1 - 2] [i_1 + 3] [i_1 + 3] [i_1])))))));
                        var_24 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_18)) & (((/* implicit */int) (unsigned short)29336))))) ? (min((arr_18 [i_1] [i_1] [i_3] [i_1]), (((/* implicit */unsigned long long int) arr_21 [2U] [2U] [i_3] [i_3] [i_6])))) : (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55169)))))))), (((/* implicit */unsigned long long int) (((~(1835290148479235565LL))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (~(((/* implicit */int) (((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_3])))) == ((+(((/* implicit */int) (signed char)-1))))))))))));
                    }
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_17))))))) || (((/* implicit */_Bool) 52578992U))));
                    arr_23 [i_0] [i_1] = ((/* implicit */unsigned long long int) (short)7096);
                }
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    for (unsigned int i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_27 ^= ((/* implicit */unsigned int) min((((/* implicit */int) ((short) (+(-38211744))))), ((+(((/* implicit */int) arr_12 [i_0 - 2]))))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_18 [i_0 - 1] [i_8 - 1] [i_7] [i_7]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_16)) ? (6243815206318203943ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) || (((/* implicit */_Bool) (short)17077))));
}
