/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90498
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) (+(1846282534)))))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -2004252303))))) != (((/* implicit */int) var_5))));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_1)))) : (((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))) > (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */int) arr_1 [i_0]))))));
        var_19 *= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [4])) > (((/* implicit */int) arr_0 [i_0 + 1]))))) > ((~(var_6)))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_20 = ((/* implicit */signed char) (((-(arr_4 [i_1]))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41457))) > ((~(18446744073709551589ULL)))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                for (long long int i_4 = 2; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_4 - 1])) != (((/* implicit */int) arr_9 [i_4 - 2] [i_4 - 1] [i_3 + 2] [i_3 + 2])))))) != (arr_2 [i_3])));
                        var_22 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned short)24102)))) != ((+(((/* implicit */int) arr_1 [i_4]))))));
                        var_23 = ((/* implicit */int) var_13);
                        var_24 = ((/* implicit */_Bool) arr_4 [0LL]);
                    }
                } 
            } 
        } 
    }
    var_25 &= ((/* implicit */unsigned long long int) var_0);
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41419))) * (4294967232LL)))))))) > (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((16787543722661110339ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))))));
    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
}
