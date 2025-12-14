/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85089
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
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_1] &= ((/* implicit */unsigned short) (_Bool)0);
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min(((~(arr_3 [i_0 - 1] [i_0 + 2]))), (((/* implicit */long long int) (-(arr_2 [i_0 + 1] [i_0])))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0 - 1]), (((/* implicit */long long int) -8))))) ? ((~(arr_3 [i_1] [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 1])) && (((/* implicit */_Bool) arr_3 [i_2] [i_0 - 2]))))))));
                    var_17 = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2]);
                }
                var_18 = ((/* implicit */unsigned char) ((((arr_3 [i_0 - 1] [i_0 - 2]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196))))) >= (((/* implicit */long long int) ((/* implicit */int) max(((short)13939), (((/* implicit */short) (_Bool)0))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned char) ((unsigned int) 13625339201186292257ULL));
        arr_14 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-133289366)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)6101)))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_17 [i_3] [i_4] [i_3] = var_14;
            arr_18 [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])), (((((12219291284338231634ULL) - (((/* implicit */unsigned long long int) 4713281014514640584LL)))) + (((/* implicit */unsigned long long int) min((585967099U), (((/* implicit */unsigned int) (unsigned char)196)))))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29407))) : (4713281014514640584LL))))));
                        var_20 = ((/* implicit */unsigned int) 4713281014514640584LL);
                    }
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_27 [i_3] [i_3] = arr_24 [i_3] [i_3] [i_3];
            var_21 = ((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned char)7)))), (((((/* implicit */int) arr_16 [i_3] [i_3])) - ((+(((/* implicit */int) (_Bool)1))))))));
            arr_28 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
        }
    }
    for (int i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        arr_31 [i_8] &= ((/* implicit */long long int) ((short) min((min((((/* implicit */int) (unsigned short)29410)), (212099412))), (max((var_1), (((/* implicit */int) arr_8 [i_8] [i_8] [i_8])))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) : (((((/* implicit */_Bool) (unsigned short)29386)) ? (-6299657042016317311LL) : (((/* implicit */long long int) arr_21 [i_8] [i_8] [i_8])))))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4713281014514640566LL)) || (((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8] [i_8]))) % (-4713281014514640585LL))))))));
    }
    for (short i_9 = 2; i_9 < 19; i_9 += 2) 
    {
        arr_34 [i_9] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)13))))) << (((-212099420) + (212099446)))))) ? (((unsigned int) ((signed char) arr_25 [i_9] [(unsigned short)4]))) : (((unsigned int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) -4713281014514640584LL))))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-8577))))) ? (((((/* implicit */_Bool) arr_15 [i_9 + 2])) ? (((4713281014514640584LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_9 + 2] [i_9]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_9 + 1] [i_9 - 2] [i_9] [i_9] [i_9] [i_9]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_15 [i_9]))))));
        arr_35 [i_9] = ((/* implicit */_Bool) max(((((_Bool)0) ? (((/* implicit */int) (unsigned short)41730)) : (((/* implicit */int) (unsigned short)29410)))), (((/* implicit */int) arr_23 [(short)18] [(short)18] [i_9] [7LL] [i_9] [i_9]))));
        arr_36 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)-8577)), ((unsigned short)36129)))) < ((-(1723779218)))))) % (((/* implicit */int) (_Bool)1))));
    }
}
