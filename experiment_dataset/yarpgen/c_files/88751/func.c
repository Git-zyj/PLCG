/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88751
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
    var_10 &= ((/* implicit */signed char) ((var_4) * (((/* implicit */long long int) ((/* implicit */int) ((5592402878093846809ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61789)))))))));
    var_11 = ((/* implicit */unsigned short) (unsigned char)95);
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13827874952653482927ULL)) ? (((/* implicit */unsigned long long int) -5063050853212575017LL)) : (16569158036886134336ULL)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned int) arr_2 [i_0])), (arr_0 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)60373)), (4068353709U)))), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -7950333303033129428LL)))))) : (((((/* implicit */_Bool) 2736178406U)) ? ((-(2353884842U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7950333303033129451LL)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned short)11068)))))))));
        var_13 &= (((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [8U]))) : (2736178391U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)2]))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_3)), (((unsigned int) min((var_2), (((/* implicit */unsigned long long int) (short)14728)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            var_15 = ((/* implicit */int) (~(var_5)));
            arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(2437806210U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_2 + 1]))) : (((var_2) % (8929421749336146285ULL)))));
        }
        for (unsigned short i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            var_16 += ((/* implicit */unsigned short) ((((arr_8 [i_3 + 1] [i_3 - 1]) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_1] [i_3])) * (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1])) << (((((/* implicit */int) (unsigned char)124)) - (115)))))) <= (var_5)))) : (((/* implicit */int) max((arr_10 [i_1] [i_3 + 2]), (arr_10 [i_1] [i_1]))))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 + 1]))) : (max((((/* implicit */long long int) var_3)), (7950333303033129408LL)))))) ? (var_7) : (min((min((((/* implicit */unsigned long long int) -7950333303033129407LL)), (12775682133852598616ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)13166)) | (((/* implicit */int) arr_6 [i_3 - 1])))))))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (arr_10 [i_1] [i_1])));
        }
        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (~(3999743118U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)107)), (arr_6 [i_1]))))) : (max((arr_8 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_9 [i_1])))))));
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)169));
        var_21 &= ((/* implicit */signed char) arr_11 [i_4] [i_4] [i_4]);
        arr_18 [(short)10] = min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17432))) >= (arr_7 [i_4]))))) : (var_9)))), (max((((7950333303033129436LL) << (((1255140505) - (1255140505))))), (((/* implicit */long long int) arr_16 [i_4] [i_4])))));
        var_22 ^= ((((unsigned int) 12232299497058446177ULL)) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (short)-31693)))))));
    }
    for (short i_5 = 3; i_5 < 10; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                {
                    arr_28 [i_5] [i_6 + 1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3953957936U)) ? ((~(10024843666918553467ULL))) : (((/* implicit */unsigned long long int) arr_24 [i_5 - 2]))));
                    arr_29 [i_7] [i_7] = max((((/* implicit */unsigned long long int) ((arr_9 [i_7]) < (((/* implicit */int) arr_2 [i_7]))))), (((((/* implicit */_Bool) (short)9508)) ? (11322196263011146085ULL) : (((/* implicit */unsigned long long int) arr_9 [i_7])))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) (((((-(var_5))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5 + 1] [i_5]))))) ? ((+(arr_0 [6U]))) : (var_9)));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) 2345094337U)) ? (min((((/* implicit */unsigned long long int) (signed char)103)), (2254387615211384496ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))))))));
    }
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max(((-(((/* implicit */int) (signed char)-106)))), (((/* implicit */int) var_8)))))));
}
