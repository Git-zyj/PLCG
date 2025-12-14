/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89895
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
        var_18 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (var_5)))) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (arr_0 [10LL] [i_0]))) : ((-(((/* implicit */int) (_Bool)1))))))) ? ((~(min((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) ((short) max((arr_0 [i_0] [i_0]), (782711902))))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? ((((~(14053026567571856534ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_7 [i_1] [i_4]))) ? (((((/* implicit */_Bool) min((6588770580083494600ULL), (((/* implicit */unsigned long long int) var_13))))) ? (4393717506137695081ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [1LL] [i_0])))) : (14053026567571856534ULL)));
                            var_21 *= ((/* implicit */short) arr_1 [i_0]);
                            var_22 = max((((/* implicit */int) (unsigned short)46673)), (782711902));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */signed char) (short)-25802);
        }
        /* vectorizable */
        for (short i_5 = 2; i_5 < 10; i_5 += 4) 
        {
            var_24 = ((/* implicit */signed char) (unsigned short)46673);
            var_25 ^= ((/* implicit */long long int) (unsigned char)1);
            var_26 = ((/* implicit */int) (~(arr_5 [4LL])));
        }
        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            var_27 |= 7852188145369327027ULL;
            arr_23 [i_0] [i_0] = ((/* implicit */short) (+((~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)6))))))));
        }
        for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                for (long long int i_9 = 3; i_9 < 10; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) (unsigned char)146);
                            var_29 = ((/* implicit */unsigned long long int) ((unsigned short) min(((+(7973978667596912943LL))), (((/* implicit */long long int) min((arr_24 [(unsigned short)7] [8ULL]), ((unsigned char)8)))))));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) min(((+(((/* implicit */int) arr_14 [i_8] [i_7] [i_7] [i_9 - 3])))), (((arr_32 [i_0] [7LL] [i_9 - 3] [i_9 - 3] [i_10]) >> (((/* implicit */int) var_17)))))))));
                        }
                    } 
                } 
            } 
            arr_34 [i_0] = ((/* implicit */long long int) (signed char)79);
        }
    }
    /* LoopSeq 1 */
    for (int i_11 = 0; i_11 < 24; i_11 += 4) 
    {
        arr_39 [i_11] = ((/* implicit */_Bool) 1125150138281882498ULL);
        var_31 = ((/* implicit */long long int) min(((+(((/* implicit */int) var_17)))), (((/* implicit */int) (_Bool)0))));
        arr_40 [14ULL] [i_11] = ((/* implicit */unsigned int) var_8);
    }
}
