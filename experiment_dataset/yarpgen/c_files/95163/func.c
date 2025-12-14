/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95163
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
    var_13 |= ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
        arr_4 [i_0] = var_4;
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-1693757117) - (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62022))) : (arr_0 [i_1 - 1])))) ? (((/* implicit */int) max((var_12), (var_3)))) : (max((((/* implicit */int) var_1)), (arr_6 [i_0] [i_1 + 1] [i_1 + 1]))))) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) 4032298407U)) ? (9022950708766458037ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) && (((((/* implicit */_Bool) 9423793364943093578ULL)) && ((_Bool)0)))))))))));
        }
        var_15 = ((/* implicit */int) ((_Bool) min((9423793364943093579ULL), (((/* implicit */unsigned long long int) (signed char)30)))));
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) ((int) ((signed char) arr_8 [i_2])));
        arr_10 [i_2] = min((((/* implicit */long long int) (_Bool)1)), (4001594471131451041LL));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_17 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2] [i_3 + 1]))));
            var_18 = ((/* implicit */long long int) max(((-(min((((/* implicit */unsigned long long int) var_3)), (arr_9 [i_2]))))), ((-(arr_5 [i_3] [i_3 + 1] [i_3 + 1])))));
        }
        arr_14 [i_2] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_8 [i_2])))) / (((/* implicit */int) max((arr_8 [i_2]), (arr_8 [i_2]))))));
        arr_15 [i_2] = (-((-(((/* implicit */int) arr_1 [i_2] [i_2])))));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -7005324401063898906LL)) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))))))) - (var_6)));
    var_20 = var_10;
    var_21 = ((/* implicit */_Bool) ((var_9) ? (((unsigned int) min((((/* implicit */int) var_1)), (var_10)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((var_4) - (479324293))))))));
}
