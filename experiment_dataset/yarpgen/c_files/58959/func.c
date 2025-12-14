/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58959
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
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (4391233339784364341ULL))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) min((((long long int) (_Bool)1)), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-51)))))));
        arr_4 [i_0] [i_0] = arr_3 [i_0 - 2];
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_1]), (((/* implicit */unsigned short) ((var_18) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) : (min((((/* implicit */long long int) arr_5 [i_1] [i_1])), ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((var_16) - (1341968227161884446LL)))))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_14 [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)62973))));
                    var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)25099))) / (-1LL)))) ? (((/* implicit */int) ((signed char) (short)0))) : (((/* implicit */int) ((6917529027641081856ULL) != (((/* implicit */unsigned long long int) -1LL))))))), (((/* implicit */int) max(((short)0), (((/* implicit */short) (signed char)69)))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) arr_8 [i_1] [i_1]);
    }
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4])) || (((/* implicit */_Bool) arr_11 [i_4] [i_4]))))))))));
        var_27 += ((/* implicit */signed char) 8145018215620525159ULL);
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned int) ((long long int) (signed char)-62));
        var_28 = (!(((/* implicit */_Bool) 287948901175001088LL)));
        arr_21 [i_5] [i_5] &= ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) arr_5 [i_5] [i_5])) : (((/* implicit */int) arr_5 [i_5] [i_5])));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
    {
        for (long long int i_7 = 2; i_7 < 8; i_7 += 2) 
        {
            {
                var_29 *= ((/* implicit */unsigned short) arr_23 [i_6]);
                arr_27 [(signed char)9] [i_7] = ((/* implicit */short) max((((unsigned int) arr_10 [i_6 + 2] [i_6 - 1])), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_6 + 1] [i_6 + 2])) | (((/* implicit */int) var_17)))))));
                var_30 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_11 [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_5 [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) (short)-1))))));
            }
        } 
    } 
}
