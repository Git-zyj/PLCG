/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88758
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) min((var_11), (((((/* implicit */int) var_8)) << (((((/* implicit */int) var_7)) - (189)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned int) 33423360)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (min((((/* implicit */unsigned long long int) var_17)), (var_14)))))));
    var_20 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (806568536U))))) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) 2104635894)) : (7349699806449175664LL))) : (((/* implicit */long long int) ((/* implicit */int) var_18))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24576))) & (34359214080LL)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) <= (7349699806449175649LL)))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) - (arr_0 [i_0]))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) min((arr_0 [i_0]), (((/* implicit */int) ((arr_6 [i_1] [i_1]) == (((/* implicit */long long int) (~(((/* implicit */int) (signed char)31))))))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned char i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        {
                            arr_15 [(unsigned char)9] [i_1] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((1580823158U), (var_0)))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_2] [i_1] [i_2])) ? (arr_10 [i_2] [i_1] [i_1] [i_2] [i_1]) : (((/* implicit */long long int) var_0))))) ? (min((((/* implicit */long long int) -916856635)), (7349699806449175653LL))) : (arr_10 [i_2] [i_2] [i_2] [i_3] [i_4]))));
                            arr_16 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned short)48175), (((/* implicit */unsigned short) (unsigned char)192))))) + (((/* implicit */int) ((signed char) min((-7349699806449175664LL), ((-9223372036854775807LL - 1LL))))))));
                            var_23 -= ((/* implicit */signed char) arr_10 [i_1] [i_4 - 3] [i_4 - 3] [i_4 - 3] [i_4 - 3]);
                            arr_17 [i_2] [i_0] [i_0] [(unsigned char)0] [9LL] = ((/* implicit */short) ((((/* implicit */_Bool) min((((-5871756843265263518LL) & (arr_13 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_13)))))) ? (((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4 + 1] [i_4])) ? (((var_16) - (135286212155539190LL))) : (arr_12 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                        }
                    } 
                } 
            } 
            var_24 -= ((/* implicit */short) var_12);
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 10; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)10095)) ^ ((-2147483647 - 1)))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)10052))) > (var_5)))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (arr_6 [i_5] [(signed char)2])))) ? (max((1152921504606844928LL), (((/* implicit */long long int) -1)))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (0LL)))))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2714144131U)), (((16LL) ^ (((/* implicit */long long int) 806568532U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_5 + 1])) > (((/* implicit */int) arr_14 [i_1] [i_1] [i_5 + 1])))))) : (min((((((/* implicit */_Bool) arr_24 [i_1] [i_1])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) ((806568513U) << (((7349699806449175664LL) - (7349699806449175655LL)))))))))))));
                            arr_27 [i_0] [i_7] [i_5 - 1] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((int) -1429369657));
                            arr_28 [2LL] [i_7] [2LL] [9] [i_0] [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)28672)) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_19 [9U] [i_1] [i_5] [i_5])))) && (((/* implicit */_Bool) max((0LL), (-1803537059935208090LL)))))))) : (min((((/* implicit */long long int) (short)4934)), (arr_1 [i_0])))));
                        }
                    } 
                } 
            } 
            var_27 += ((/* implicit */unsigned char) -1);
        }
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (unsigned short)0)), (arr_20 [i_0] [i_0] [i_0] [i_0] [(short)7]))) << ((((-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (13510798882111488LL))))) + (207LL)))));
            var_29 = ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]);
            var_30 = ((/* implicit */unsigned int) ((int) -7349699806449175654LL));
        }
        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
        {
            arr_37 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)15)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222)))));
            arr_38 [i_0] = ((/* implicit */unsigned short) (~(arr_21 [i_0] [i_0] [i_0] [(unsigned short)1] [(unsigned char)3])));
            var_31 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_22 [(unsigned short)1] [i_9] [i_9] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_9]))) : (arr_22 [i_9] [i_9] [i_9] [(unsigned char)10] [(unsigned char)10] [i_0])))));
        }
        var_32 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_30 [i_0])) ? (((/* implicit */int) var_12)) : (var_11)))));
    }
    var_33 += ((/* implicit */int) ((unsigned char) 1941504953));
}
