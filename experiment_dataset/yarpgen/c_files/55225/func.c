/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55225
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) 2565536169653153353ULL))))));
            arr_4 [i_1] &= ((/* implicit */unsigned int) (+((~(arr_3 [i_0] [i_1] [i_0])))));
            var_20 -= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_1 [i_1] [i_1])) >> (((arr_2 [i_0] [i_0]) - (3577575493U))))));
        }
        for (int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-28646)), (arr_8 [i_0] [i_2] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_2]))) : (var_2))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -755165883)) ? (arr_10 [i_2] [(signed char)12] [i_2]) : (arr_5 [i_3])))))) ? (min(((~(arr_3 [i_0] [i_2] [i_3]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)229)), (var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28653))))))));
            }
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [2U])) ? (min((arr_5 [i_2]), (18400289420011558653ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))));
        }
        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            var_24 += ((/* implicit */_Bool) (+((~(((/* implicit */int) ((signed char) arr_12 [i_0])))))));
            var_25 -= ((/* implicit */long long int) (((+(70368475742208ULL))) >= (46454653697992963ULL)));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (min((((((/* implicit */_Bool) arr_1 [i_0] [i_4])) ? (var_16) : (1683626286236111745ULL))), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_4 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_13 [i_0]), (((/* implicit */unsigned long long int) var_18))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) 1564749367)) : (arr_2 [i_0] [i_4]))))))))));
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4 + 1] [i_4 + 1])) || (((/* implicit */_Bool) arr_7 [i_4] [i_4 - 1] [i_0]))))), ((~(arr_2 [i_4 - 1] [i_4 + 1]))))))));
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((755165860), (469762048)))) ? (min((2U), (((/* implicit */unsigned int) (short)28662)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-28640)), ((unsigned short)24993)))))))) ? (((((/* implicit */_Bool) arr_10 [14U] [i_4 + 1] [14U])) ? (arr_8 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]) : (arr_8 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]))) : (max(((-(arr_8 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [(unsigned short)8] [(unsigned short)8])), (arr_2 [2LL] [i_0])))))))))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            arr_17 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_5])) || (((/* implicit */_Bool) arr_2 [i_0] [i_5]))));
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (short)-28634))));
            var_30 = ((unsigned char) arr_7 [i_0] [i_5] [i_5]);
            var_31 = ((/* implicit */unsigned char) 755165874);
        }
        var_32 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((unsigned int) (unsigned short)1389))))), ((-(arr_10 [i_0] [i_0] [i_0]))));
    }
    var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (var_10)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18400289420011558634ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2)))))))));
    var_34 = ((/* implicit */_Bool) ((signed char) var_9));
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        arr_20 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) arr_1 [i_6] [i_6]))))) : (min((((/* implicit */unsigned int) arr_1 [i_6] [i_6])), (arr_2 [i_6] [i_6])))));
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_16 [i_6])) ? (arr_10 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_16 [i_6]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 4) 
        {
            for (int i_8 = 2; i_8 < 10; i_8 += 4) 
            {
                {
                    var_35 -= ((/* implicit */unsigned long long int) -14);
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) var_16))));
                }
            } 
        } 
    }
}
