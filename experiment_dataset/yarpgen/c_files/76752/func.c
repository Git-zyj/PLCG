/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76752
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((short) var_0))))) ? (((/* implicit */int) (unsigned short)28665)) : ((~(((/* implicit */int) arr_0 [i_0]))))));
                var_11 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            var_12 += ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28671)))))));
            var_13 = ((/* implicit */long long int) var_4);
        }
        for (short i_4 = 3; i_4 < 12; i_4 += 4) 
        {
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) 6)))))));
            var_15 = ((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2]);
            /* LoopSeq 4 */
            for (int i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                var_16 = ((/* implicit */short) (~(((/* implicit */int) max(((unsigned short)36875), ((unsigned short)28657))))));
                arr_13 [i_4] [i_4] = ((/* implicit */_Bool) max((((unsigned long long int) 1ULL)), (((((/* implicit */_Bool) (unsigned short)28665)) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 + 3])))))));
            }
            for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2]))));
                var_18 = ((/* implicit */unsigned long long int) (unsigned char)6);
            }
            for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */long long int) max((((arr_7 [i_7 - 1] [i_7 + 2]) >> (((arr_3 [i_7 - 1] [i_7 - 3] [i_4 - 3]) - (1906235687U))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_7 - 2] [i_7 - 1] [i_4 - 1])))));
                var_20 = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_4 [i_2])))) >> (((((((/* implicit */_Bool) 70368744177600ULL)) ? (1118790252998598013LL) : (max((848202119621010047LL), (1118790252998598013LL))))) - (1118790252998597994LL)))));
            }
            for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_8 - 2])) ? (-3870327121710866048LL) : (((/* implicit */long long int) arr_3 [i_8 - 1] [i_4 + 2] [i_2])))))) ? (((((/* implicit */_Bool) ((short) -463995600329263873LL))) ? (max((0LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28684)))));
                var_22 = ((/* implicit */unsigned char) ((signed char) (unsigned short)36883));
            }
            arr_21 [i_4] [i_4 - 1] [i_4] = ((/* implicit */short) 3033692610529444531LL);
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((unsigned char) arr_17 [9ULL] [i_4] [i_4] [i_4 - 1])))));
        }
        for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            arr_25 [i_9] = ((/* implicit */unsigned long long int) (unsigned short)36839);
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((arr_7 [(unsigned char)13] [(unsigned char)5]) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) 296941742U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28704)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_4 [i_11])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14411))))))))))));
                        var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)24818))));
                        var_26 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)-113)), (((((/* implicit */_Bool) (unsigned char)241)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 1; i_12 < 10; i_12 += 2) 
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_2] [i_12] [i_2] = ((/* implicit */signed char) -463995600329263889LL);
                            arr_33 [i_12] [(_Bool)1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) -1)) : (var_9)))))) ? (((((/* implicit */_Bool) (~(var_4)))) ? ((((_Bool)1) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-101)), (-1168296499871111346LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19910))) : (var_2)))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) (_Bool)1)))))));
                            var_27 -= ((/* implicit */signed char) (-((~(((/* implicit */int) (unsigned short)23601))))));
                        }
                    }
                } 
            } 
            var_28 = var_0;
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1168296499871111362LL)))) ? (1866746598171165995LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_30 = max((((arr_7 [i_2] [i_2]) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)8))))))), (((/* implicit */unsigned long long int) ((arr_17 [i_2] [i_9] [i_9] [i_9]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0))))))));
        }
        var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) < (14978318496313348912ULL))))));
        var_32 = ((/* implicit */_Bool) var_6);
    }
    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)69)), (arr_34 [i_13])))) || (((/* implicit */_Bool) (unsigned char)64))));
        var_34 += ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 2065462838U)) && (((/* implicit */_Bool) (unsigned short)28678))))));
    }
    var_35 *= max((var_9), (max((((/* implicit */unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) var_0)), (var_3))))));
    var_36 = (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1LL)), (var_5)))))) ? (var_3) : (var_2));
}
