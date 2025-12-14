/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93830
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) (((+(((/* implicit */int) (short)127)))) % (((/* implicit */int) max(((unsigned short)788), (((/* implicit */unsigned short) var_7)))))))), (((long long int) var_5))));
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6315)) ? (((/* implicit */int) (short)-23930)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16796456373190913107ULL)) || (((/* implicit */_Bool) (short)-31571)))))) : (var_0))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((((/* implicit */unsigned long long int) max((arr_7 [i_1] [i_1] [i_1] [i_1]), (arr_7 [i_0] [i_1] [i_2] [i_1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) * (4904776606736008325ULL))))))));
                    arr_8 [(signed char)13] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_2])) != (((((/* implicit */_Bool) 1763064646936981477LL)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0])))))))) + (6554792623444565090LL)));
                    arr_9 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-16))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6554792623444565092LL)) ? (4503599627370496LL) : (-1763064646936981461LL)));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (((/* implicit */int) arr_11 [i_3 - 2])) : (((/* implicit */int) arr_11 [i_3 - 2]))));
        var_19 -= ((/* implicit */long long int) (unsigned short)65530);
        var_20 ^= ((/* implicit */unsigned short) (-((-(((/* implicit */int) (signed char)44))))));
        arr_12 [(_Bool)1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((-4503599627370499LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-20943))))))));
    }
    for (unsigned short i_4 = 3; i_4 < 22; i_4 += 4) /* same iter space */
    {
        var_21 -= ((/* implicit */signed char) min((((long long int) (!(((/* implicit */_Bool) (short)31566))))), (((/* implicit */long long int) (~(4294967283U))))));
        arr_17 [i_4] = (i_4 % 2 == 0) ? (((/* implicit */short) ((((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (876554647U))) & (((/* implicit */unsigned int) max((((((/* implicit */int) arr_15 [i_4])) << (((-4503599627370504LL) + (4503599627370514LL))))), (((/* implicit */int) arr_14 [i_4 + 1])))))))) : (((/* implicit */short) ((((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (876554647U))) & (((/* implicit */unsigned int) max((((((((/* implicit */int) arr_15 [i_4])) + (2147483647))) << (((((-4503599627370504LL) + (4503599627370514LL))) - (10LL))))), (((/* implicit */int) arr_14 [i_4 + 1]))))))));
        var_22 = ((/* implicit */unsigned short) ((((_Bool) (unsigned short)65535)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30222))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)156)) && (((/* implicit */_Bool) ((4294967291U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229)))))))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-92)) ? (1627586797U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5 + 2]))))))));
        var_24 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65529))));
    }
}
