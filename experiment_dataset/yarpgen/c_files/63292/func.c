/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63292
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
    var_12 &= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    var_13 += ((/* implicit */unsigned char) (short)16384);
    var_14 = ((/* implicit */_Bool) (-(((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((+(1152921504606830592ULL)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            var_15 *= ((/* implicit */signed char) (_Bool)1);
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_10))));
            arr_6 [i_0] [i_1] &= ((/* implicit */unsigned char) (short)-12189);
            var_17 *= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_1))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)0)) : ((((_Bool)0) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (_Bool)1))))));
            var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (var_8)))), ((-(((((/* implicit */_Bool) var_6)) ? (arr_9 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2035)))))))));
        }
        var_20 = ((/* implicit */unsigned short) var_2);
        arr_10 [i_0] = ((/* implicit */long long int) ((((15964691743485516199ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 984951319)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (4343716280948202203LL)))))) * (((/* implicit */unsigned long long int) -1002168494852512791LL))));
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) (unsigned char)88);
            arr_16 [i_3] [i_3] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(arr_7 [i_4])))) <= (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))), ((+(var_2)))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((-7509491432923210383LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) > (((arr_11 [i_3]) - (((/* implicit */long long int) -1780068000)))))))));
                    arr_21 [i_3] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) > (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (+(arr_20 [i_3] [i_3] [i_3] [i_3])))) : ((+(arr_9 [i_3] [i_6])))))));
                    var_23 = ((/* implicit */short) arr_8 [i_6]);
                }
            } 
        } 
        arr_22 [i_3] &= ((((((/* implicit */_Bool) min((-1829826244878504686LL), (((/* implicit */long long int) (unsigned char)119))))) ? (((/* implicit */int) max((((/* implicit */short) var_7)), ((short)-12189)))) : ((~(((/* implicit */int) (_Bool)1)))))) ^ (arr_4 [i_3] [i_3] [i_3]));
    }
    for (long long int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
    {
        arr_27 [i_7] [i_7] = (unsigned short)2035;
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (max((((((/* implicit */_Bool) -2266553162411321195LL)) ? (((/* implicit */long long int) 984951319)) : (0LL))), (((/* implicit */long long int) (unsigned char)23)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57959)) ? (((/* implicit */int) max((arr_17 [i_7] [i_7] [i_7]), (((/* implicit */signed char) var_3))))) : (((var_3) ? (((/* implicit */int) (unsigned short)2046)) : (((/* implicit */int) (unsigned short)63501)))))))));
        arr_29 [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_7] [i_7])) ? (((var_4) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63501))))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1))))))) > (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7] [i_7]))) - (520093696U))))));
    }
    for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        var_24 = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_4))))))));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (+(((((/* implicit */long long int) -355034520)) | (max((var_4), (((/* implicit */long long int) var_8)))))))))));
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 1) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_8])) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_9]))) / (arr_39 [i_8] [i_8] [i_8])))))))));
                        arr_41 [i_8] [i_8] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((var_5) || (((/* implicit */_Bool) var_8))))), ((+(2615196833632185118LL)))))) && (((/* implicit */_Bool) var_8))));
                        arr_42 [i_8] [i_10] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << ((((((+(-4891610512125766430LL))) + (4891610512125766439LL))) - (9LL)))))) >= ((+(11969422691424819694ULL)))));
                        var_27 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(-2615196833632185119LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)4)))))) : (((((/* implicit */_Bool) 11969422691424819694ULL)) ? (2615196833632185103LL) : (((/* implicit */long long int) -355034520)))))), (((((((/* implicit */_Bool) 269404969)) ? (8335005769688383768LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) | (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_11])))))));
                    }
                } 
            } 
        } 
        arr_43 [i_8] [i_8] = ((/* implicit */unsigned int) (~((((((~(((/* implicit */int) arr_31 [i_8])))) + (2147483647))) << (((min((((/* implicit */unsigned long long int) arr_36 [i_8] [i_8] [i_8])), (17158848753744940149ULL))) - (17158848753744940149ULL)))))));
    }
}
