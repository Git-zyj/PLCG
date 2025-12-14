/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/953
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2)))))))) ? (((((/* implicit */_Bool) -615980543)) ? (((int) 6876783965387543585LL)) : ((~(((/* implicit */int) var_5)))))) : (((((((/* implicit */int) (unsigned char)218)) | (-615980543))) & ((~(((/* implicit */int) (unsigned char)245))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */unsigned int) 2147483647)) > (var_0))) ? (arr_5 [2ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(615980540)))) ? ((~(((((/* implicit */_Bool) 6876783965387543601LL)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) : (((/* implicit */int) (unsigned short)1)))))) : (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) ((signed char) var_5))))))));
                        var_14 = ((/* implicit */short) ((long long int) -615980529));
                        var_15 = 140600049401856ULL;
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) var_11);
                    }
                    for (short i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 127)))) - (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))) : (arr_9 [i_0])))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((arr_9 [i_0]), (((/* implicit */unsigned long long int) var_1))))))) && (((/* implicit */_Bool) ((((6876783965387543601LL) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) ? ((~(var_11))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)42))))))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2]))) : (1469428151U))), (((/* implicit */unsigned int) arr_10 [6LL] [i_4 + 2] [i_4] [i_4]))))) ? ((~((~(var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (4398046511103LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))));
    var_19 = ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)496)) : (((/* implicit */int) (unsigned char)254)))) != ((((((~(((/* implicit */int) (unsigned short)26566)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
}
