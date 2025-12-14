/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75959
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 |= ((((((/* implicit */int) var_3)) | (((/* implicit */int) var_6)))) << ((((((-(((/* implicit */int) var_1)))) + (37362))) - (21))));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_2))));
        arr_3 [11ULL] [i_0] &= ((/* implicit */_Bool) var_10);
        var_15 &= ((/* implicit */unsigned short) (!(arr_0 [i_0] [i_0])));
        arr_4 [i_0] [(short)7] &= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_0 [i_0] [14ULL])))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22645))) % (var_8))) - (22627ULL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_9 [i_1] |= ((/* implicit */long long int) ((((((/* implicit */long long int) (~(arr_5 [i_1])))) < (((arr_2 [3ULL]) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (5549229058124763956LL))))) ? (min((arr_6 [i_1]), (var_8))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (0ULL)))))));
        var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), ((~(((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) max(((signed char)-6), (arr_1 [i_1]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) | (((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            arr_14 [i_1] [i_1] &= var_6;
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned long long int) ((((((/* implicit */int) (unsigned char)104)) | (((/* implicit */int) (unsigned char)87)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_2))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
        {
            var_19 &= ((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned char)168), (max(((unsigned char)151), ((unsigned char)67))))))));
            arr_17 [(unsigned short)10] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)72))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned long long int) var_2)), (var_8)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_1]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))) : (((9050743124541331534LL) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_24 [i_4]))));
                    var_21 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) var_7)))) : (arr_22 [i_4] [i_4] [(unsigned char)17]))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11579143152813348815ULL)) ? (-4010447938077487943LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
                    var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_5 - 1] [i_5] [i_5] [i_5 - 1])) % (((/* implicit */int) arr_26 [i_5 - 1] [i_5] [i_5] [i_5 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (signed char)-10)))))) : (((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                }
            } 
        } 
    } 
}
